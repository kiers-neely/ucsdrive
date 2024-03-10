import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import face_recognition
import cv2
import numpy as np
import os

class FaceRecognitionPublisher(Node):
    def __init__(self):
        super().__init__('face_recognition_publisher')
        self.publisher_ = self.create_publisher(String, 'identified_faces', 10)
        self.timer_period = 0.1  # seconds
        self.timer = self.create_timer(self.timer_period, self.publish_identified_face)

        # Initialize face encodings and names
        self.known_face_encodings = []
        self.known_face_names = []

        # Path to your known faces images
        images_directory = '/home/kneely/Pictures'

        # Load images and generate encodings
        self.load_known_faces(images_directory)

        # Video capture
        self.video_capture = cv2.VideoCapture(0)

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
        ret, frame = self.video_capture.read()
        if ret:
            rgb_frame = frame[:, :, ::-1]
            face_locations = face_recognition.face_locations(rgb_frame)
            face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)

            for face_encoding in face_encodings:
                matches = face_recognition.compare_faces(self.known_face_encodings, face_encoding)
                name = "Unknown"

                face_distances = face_recognition.face_distance(self.known_face_encodings, face_encoding)
                best_match_index = np.argmin(face_distances)
                if matches[best_match_index]:
                    name = self.known_face_names[best_match_index]

                self.publisher_.publish(String(data=name))

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
