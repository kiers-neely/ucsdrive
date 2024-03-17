# Breakdown of Custom Packages

This section offers a general outline of how our custom packages are built and communicate with each other to perform autonomous tasks.

## Ride Request
### Package: `ride_request_pkg`
### Node: `ride_request`

After the user has built all packages and sourced the environment, the first step is to initiate the ride request.

```console
user@host:~$ colcon build
user@host:~$ source install/setup.bash
user@host:~$ ros2 run ride_request_pkg ride_request
Please enter your First Name:
```

The node will ask for user input of the necessary parameters and then publish the results to the `ride_requests` topic.

```console
user@host:~$ colcon build
user@host:~$ source install/setup.bash
user@host:~$ ros2 run ride_request_pkg ride_request
Please enter your First Name: Kiersten
Please enter your Last Name: Neely
Please enter your Pickup Location: EBU1
Please enter your Dropoff Location: EBU2
[INFO] [1710593018.318554475] [ride_request_publisher]: Sending Request: Name: Kiersten Neely, Pickup: EBU1, Dropoff: EBU2
[INFO] [1710593018.320720325] [ride_request_publisher]: Sending Request: Name: Kiersten Neely, Pickup: EBU1, Dropoff: EBU2
[INFO] [1710593020.284453696] [ride_request_publisher]: Sending Request: Name: Kiersten Neely, Pickup: EBU1, Dropoff: EBU2
...
```

The values are then stored as interfaces that we predefined so they could be utilized by features in all of our other nodes, detailed in the next section.

## Custom Interfaces
### Package: `user_input_interfaces`
### Types: `msg/RideRequest.msg`, `msg/RideMatch.msg`

In order to allow communication between nodes of the exact input values, we could not use the basic `std_msgs/String` interface for publishing data since it wouldn't store our messages as precisely as we needed. To do this we created a package for our specific messages.

```python
# Custom message definition for RideRequest.msg
string first_name
string last_name
string pickup_location
string dropoff_location
```

```python
# Custom message definition for RideMatch.msg
string identified_face
```

## Verification Service
### Package: `face_rec_pkg`
### Node: `verification_service`

Now that we have a node publishing our user input interface messages, we can call the identity verification service. 

In a new terminal, the user can source the install again and initiate the verification service. This node will then confirm initiation and wait for both necessary message types to be defined in order to return a boolean match assessment of the names. *Don't forget to source again!*

```console
user@host:~$ source install/setup.bash
user@host:~$ ros2 run face_rec_pkg verification_service
[INFO] [1710592991.756495150] [verification_service]: Verification service ready.
...
```

At this point, the node is waiting for the `msg.first_name` and `msg.identified_face` to both be published before analyzing for a match.

## Face Recognition
### Package: `face_rec_pkg`
### Node: `face_publisher`

*To see the base program we ROS-ified for this part of our project, you can find the [demo here](https://github.com/ageitgey/face_recognition/blob/master/examples/facerec_from_webcam_faster.py)!*

Our third node does most of the heavy lifting. A new terminal is used to launch a node written with the `face_recognition` Python library, which is built with `dlib`'s deep learning face recognition model. It uses OpenCV to access live video stream and scan for the face of the rider who is attempting to use the service, and will eventually be integrated with our GPS navigation package (still currently a work in progress).

With the `ride_request` and `verification_service` still running, the next step begins with

```console
user@host:~$ source install/setup.bash
user@host:~$ ros2 run face_rec_pkg face_publisher
[INFO] [1710592603.753444127] [face_recognition_publisher]: Loaded kiersten
[INFO] [1710592606.906577319] [face_recognition_publisher]: Loaded cory
[INFO] [1710592607.094627627] [face_recognition_publisher]: Looking for faces...
```

For this example demonstration I had only loaded a photo of me and one other person, since she was in the room with me and I could test the program's ability to recognize her as well (which it did!). The node logs progress of loading the images from the directory and successfully encoding them. After a moment, the node accesses the webcam (or, when it's deployed on the Jetson, it'll access an Oak-D Lite which is mounted to the car) and tries to match the user to **any** of the "students" saved in the database. 

Initially we were going to try performing face recognition as well as identity matching at the same time, or in the same node, but we decided to make a separate package for the actual verification. This way the face rec node could send out a name in a custom message `RideMatch.msg` for the verifier to easily pull in its own process.

Results:
<dl>
  <p align=center>
    <img src="https://github.com/kiers-neely/ucsd-mae-148-team-4/assets/161119406/b5491392-2dd1-4e2e-a5b4-34adfd4c01a0" alt="face rec node in action" width="500">
  </p>
</dl>

Hell yeah! If a match is made to a name in the database, the video will stream with a box around the identified face. The node will keep spinning until cancelled, saying

```console
[INFO] [1710592608.036929152] [face_recognition_publisher]: Identified kiersten - Welcome! Confirming rider match...
[INFO] [1710592608.287038785] [face_recognition_publisher]: Identified kiersten - Welcome! Confirming rider match...
[INFO] [1710592608.510743598] [face_recognition_publisher]: Identified kiersten - Welcome! Confirming rider match...
[INFO] [1710592608.736816880] [face_recognition_publisher]: Identified kiersten - Welcome! Confirming rider match...
```

to indicate that a student was identified by the robot, but has not yet been matched to the identity of the ride requester. The concept here was to keep UCSDrive! safe and contained exclusively for students to travel quickly across campus. This means the database of known faces would ideally be made up of UCSD students only, as a form of student ID. *Note: for simplicity's sake, we wrote the program to verify by first name only, but in the real world this feature would obviously need to be a little more specific.*

Now, for this package our robot takes into consideration a few different options. 

If the student is recognized, the robot will call back the name of the student as shown, even though there hasn't been a verification yet - hence the callback indication. However, if the video stream picks up a face that is not stored in the database, the user will see

```console
[INFO] [1710593091.288775614] [face_recognition_publisher]: Student not found in database. Please register to access UCSDrive! services.
```

This output will lead to a different response from our verification service, but we'll get into that in a moment - first let's go back to our verification service node, which has been waiting patiently in the background for this moment!

## Verification Service
### Package: `face_rec_pkg`
### Node: `verification_service`

If we had taken a look back over at our verification node, we would have seen the following message start spinning after the initial user input was received and published by the ride request node.

```console
user@host:~$ source install/setup.bash
user@host:~$ ros2 run face_rec_pkg verification_service
[INFO] [1710592991.756495150] [verification_service]: Verification service ready.
[INFO] [1710593018.257239225] [verification_service]: Request received from kiersten
[INFO] [1710593018.321411545] [verification_service]: Request received from kiersten
[INFO] [1710593020.285235290] [verification_service]: Request received from kiersten
...
```

This will run until the face match was made to the student database. Once the face publisher node sends out the identity of the student, stored in the `RideMatch.msg` interface, the verification service performs the match assessment.

```console
[INFO] [1710593040.285225018] [verification_service]: Request received from kiersten
[INFO] [1710593040.285225018] [verification_service]: Received identified student kiersten
[INFO] [1710593041.249112622] [verification_service]: Identities compared. Match: True! Hi kiersten, thank you for using UCSDrive!
```

Alternatively, if the identified student does not match the user who initiated the ride:

```console
[INFO] [1710593040.285225018] [verification_service]: Request received from kiersten
[INFO] [1710593114.458144907] [verification_service]: Received identified student cory
[INFO] [1710593114.456945592] [verification_service]: Identities compared. Match: False. Sorry, cory, we could not verify you with ride request.
```

And, finally, if the identified face is not in the student database at all:

```console
[INFO] [1710593040.285225018] [verification_service]: Request received from kiersten
[INFO] [1710593114.458144907] [verification_service]: Received identified student Unknown
[INFO] [1710593114.456945592] [verification_service]: Identities compared. Match: False. Sorry, we could not verify you in the student database.
```

# More to come

As much as we would love to have the whole thing running autonomously, ten weeks is not too conducive for our hopes and dreams on that front. However, I really look forward to integrating our GPS path following into the program! 

## GPS with Point One Nav

Currently, our car is trained in GPS waypoint following to autonomously navigate from a series of saved paths which we gathered using DonkeyCar. We have `.csv` path files that guide our robot from Base to Pickup, to be initiated once the ride request is published, as well as from Pickup to Dropoff if the student rider is correctly verified. We also have a third path saved from Dropoff back to Base, which our robot will choose to take if the ride cannot be verified.

## Stretch Goals
### Package Integration with UCSD Robocar Modules

In a perfect world, we would have these DonkeyCar RTK path following methods integrated into the UCSD Robocar base module that enables the robot to autonomously control steering and throttle while performing the custom packages we built in our overlay workspace. It's possible that since we have already successfully deployed autonomous line and lane-following using computer vision, we could use a second Oak-D Lite for face recognition and keep one in the front for navigation to make our execution a little easier. But since when do engineers ever try to make things easier...

### LiDAR

For extra safety measures, we'd like to implement our LiDAR for object detection and obstacle avoidance. Stay tuned for this one too!

Thanks again to our awesome Professor Jack Silberman and TA Arjun Naageshwaran for all the guidance! Videos of our car and our nodes in action on the Jetson will be up by the end of the week~

- kiersten
