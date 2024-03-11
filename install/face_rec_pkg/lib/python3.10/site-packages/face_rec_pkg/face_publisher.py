import rclpy
from rclpy.node import Node
from user_input_interfaces.msg import RideMatch  # Import the custom message
import face_recognition
import cv2
import numpy as np
import os

class FaceRecognitionPublisher(Node):
    def __init__(self):
        super().__init__('face_recognition_publisher')
        self.publisher_ = self.create_publisher(RideMatch, 'identified_faces', 10)
        self.timer_period = 0.1  # seconds
        self.timer = self.create_timer(self.timer_period, self.publish_identified_face)

        # Initialize face encodings and names
        self.known_face_encodings = []
        self.known_face_names = []
        self.face_locations = []
        self.face_encodings = []
        self.face_names = []


        # Path to your known faces images
        images_directory = 'src/known_faces' 

        # Load images and generate encodings
        self.load_known_faces(images_directory)

        self.video_capture = cv2.VideoCapture(2)


    def load_known_faces(self, images_directory):
        for filename in os.listdir(images_directory):
            if filename.endswith(".jpg") or filename.endswith(".png"):
                image_path = os.path.join(images_directory, filename)
                image = face_recognition.load_image_file(image_path)
                face_encoding = face_recognition.face_encodings(image)

                if face_encoding:
                    self.known_face_encodings.append(face_encoding[0])
                    self.known_face_names.append(os.path.splitext(filename)[0])

                # Optional: Log the loaded names for verification
                self.get_logger().info(f'Loaded {os.path.splitext(filename)[0]}')

    def publish_identified_face(self):
        msg = RideMatch()
        self.get_logger().info('Looking for faces...')

        process_this_frame = True

        while True:
            ret, frame = self.video_capture.read()

            if ret:
                frame_array = np.array(frame)
                rgb_frame = frame_array[:, :, ::-1]
                self.face_locations.append(face_recognition.face_locations(rgb_frame))
                self.face_encodings.append(face_recognition.face_encodings(rgb_frame, self.face_locations))


                if process_this_frame:
                    for face_encoding in self.face_encodings:
                        matches = face_recognition.compare_faces(self.known_face_encodings, face_encoding)
                        name = "Unknown"

                        face_distances = face_recognition.face_distance(self.known_face_encodings, face_encoding)
                        best_match_index = np.argmin(face_distances)
                        if matches[best_match_index]:
                            name = self.known_face_names[best_match_index]
                            msg.identified_face = name
                            self.publisher_.publish(msg)
                            self.get_logger().info(f'Identified {msg.identified_face} - Welcome! Confirming rider match...')
                        else:
                            msg.identified_face = 'Unknown'
                            self.publisher_.publish(msg)
                            self.get_logger().info(f'Student not found in database. Please register to access UCSDrive! services.')

                    self.face_names.append(name)

                process_this_frame = not process_this_frame

            # Display the results
            for (top, right, bottom, left), name in zip(self.face_locations, self.face_names):

                # Draw a box around the face
                cv2.rectangle(frame, (left, top), (right, bottom), (0, 0, 255), 2)

                # Draw a label with a name below the face
                cv2.rectangle(frame, (left, bottom - 35), (right, bottom), (0, 0, 255), cv2.FILLED)
                font = cv2.FONT_HERSHEY_DUPLEX
                cv2.putText(frame, name, (left + 6, bottom - 6), font, 1.0, (255, 255, 255), 1)

            # Display the resulting image
            cv2.imshow('Video', frame)

def main(args=None):
    rclpy.init(args=args)
    face_recognition_publisher = FaceRecognitionPublisher()
    rclpy.spin(face_recognition_publisher)
    face_recognition_publisher.video_capture.release()
    cv2.destroyAllWindows()
    face_recognition_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
