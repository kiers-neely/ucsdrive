import rclpy
from rclpy.node import Node
from user_input_interfaces.msg import RideRequest  # Import the custom message

class RideRequestPublisher(Node):
    def __init__(self):
        super().__init__('ride_request_publisher')
        self.publisher_ = self.create_publisher(RideRequest, 'ride_requests', 10)
        timer_period = 2  # seconds
        self.timer = self.create_timer(timer_period, self.request_callback)
        self.first_name = input("Please enter your First Name: ")
        self.last_name = input("Please enter your Last Name: ")
        self.pickup_location = input("Please enter your Pickup Location: ")
        self.dropoff_location = input("Please enter your Dropoff Location: ")

    def request_callback(self):
        msg = RideRequest()
        msg.first_name = self.first_name
        msg.last_name = self.last_name
        msg.pickup_location = self.pickup_location
        msg.dropoff_location = self.dropoff_location
        self.publisher_.publish(msg)
        self.get_logger().info(f'Sending Request: Name: {msg.first_name} {msg.last_name}, Pickup: {msg.pickup_location}, Dropoff: {msg.dropoff_location}')

def main(args=None):
    rclpy.init(args=args)
    ride_request_publisher = RideRequestPublisher()
    rclpy.spin(ride_request_publisher)
    ride_request_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
