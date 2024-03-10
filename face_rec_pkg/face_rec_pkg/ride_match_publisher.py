import rclpy
from user_input_interfaces.msg import RideRequest, RideMatch  # Import the custom messages
from rclpy.node import Node

class RideMatchPublisher(Node):
    def __init__(self):
        super().__init__('ride_match_publisher')
        self.publisher_ = self.create_publisher(RideMatch, 'ride_matches', 10)
        self.subscription = self.create_subscription(RideRequest, 'ride_requests', self.match_callback, 10)
        self.subscription = self.create_subscription(RideMatch, 'identified_faces', self.match_callback, 10)

    def request_callback(self, msg):
        msg = RideRequest()
        self.ride_request_name = msg.first_name
        self.publisher_.publish(msg)
        self.get_logger().info(f'Verifying face with ride request from {msg.first_name}...')

    def match_callback(self, msg):
        msg = RideMatch()
        if self.ride_request_name and msg.identified_face.lower() == self.ride_request_name.lower():
            self.get_logger().info(f'Match found! Initiating ride for {msg.identified_face}')
        else:
            self.get_logger().info(f'No match found for {msg.identified_face}')

def main(args=None):
    rclpy.init(args=args)
    ride_match_publisher = RideMatchPublisher()
    rclpy.spin(ride_match_publisher)
    ride_match_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
# The ride_match_publisher.py script is similar to the face_publisher.py script, but it has a few differences:
# The RideMatch message is imported from the user_input_interfaces package.
# The RideRequest message is imported from the user_input_interfaces package.
# The RideMatchPublisher class is defined, which inherits from the Node class.
# The __init__ method is defined, which initializes the node and creates a publisher and a subscription.
# The request_callback method is defined, which publishes a RideRequest message.
# The match_callback method is defined, which publishes a RideMatch message.
# The main function is defined, which initializes the node and spins the node.
# The main function is called if the script is executed as the main program.
    # (Notes auto generated in VS Code by the Python AutoDoc extension by Kory Mathewson.)