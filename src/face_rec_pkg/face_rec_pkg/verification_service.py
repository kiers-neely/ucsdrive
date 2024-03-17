import rclpy
from rclpy.node import Node
from user_input_interfaces.msg import RideRequest, RideMatch

class VerificationService(Node):

    def __init__(self):
        super().__init__('verification_service')
        self.subscription_1 = self.create_subscription(
            RideRequest,
            'ride_requests',
            self.ride_request_callback,
            10)
        self.subscription_2 = self.create_subscription(
            RideMatch,
            'identified_faces',
            self.ride_match_callback,
            10)
        self.get_logger().info('Verification service ready.')

    def ride_request_callback(self, msg):
        # Store the first name and identified name from the received messages
        self.first_name = msg.first_name
        self.get_logger().info('Ride request received from %s. Waiting for rider identification...' % self.first_name)

    def ride_match_callback(self, msg):
        # Trigger the comparison when both first_name and identified_face are available
        if hasattr(self, 'first_name'):
            self.compare_names(msg.identified_face)
            self.get_logger().info('Student identified. Comparing with request...')

    def compare_names(self, identified_face):
        # Compare the names
        if self.first_name.lower() == identified_face.lower():
            is_match = True
            self.get_logger().info(f'Match: {is_match}! Hi {identified_face}, Thank you for using UCSDrive!')
        else:
            is_match = False
            self.get_logger().info(f'Match: {is_match}. Sorry, {identified_face}, we could not verify you with ride request.')

        
def main(args=None):
    rclpy.init(args=args)
    verification_service = VerificationService()
    rclpy.spin(verification_service)
    verification_service.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
