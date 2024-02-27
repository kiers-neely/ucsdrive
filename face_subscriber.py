import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class FaceRecognitionSubscriber(Node):
    def __init__(self):
        super().__init__('face_recognition_subscriber')
        self.subscription = self.create_subscription(String, 'identified_faces', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('Identified Face: "%s"' % msg.data)

def main(args=None):
    rclpy.init(args=args)
    face_recognition_subscriber = FaceRecognitionSubscriber()
    rclpy.spin(face_recognition_subscriber)
    face_recognition_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
