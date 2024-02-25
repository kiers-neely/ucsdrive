<div id="top"></div>

<h1 align="center">UCSDrive! Autonomous Robot Car Project</h1>

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/kiers-neely/ucsd-mae-148-team-4">
    <img src="images\UCSDLogo_JSOE_BlueGold.png" alt="Logo" width="400" height="100">
  </a>
<h3>MAE148 Final Project</h3>
<p>
Team 4 Winter 2024
</p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#team-members">Team Members</a>
    </li>
    <li><a href="#final-project">Final Project</a></li>
      <ul>
        <li><a href="#primary-goals">Primary Goals</a></li>
        <li><a href="#final-project-documentation">Final Project Documentation</a></li>
        <li><a href="#gantt-chart">Gantt Chart</a></li>
      </ul>
    <li><a href="#robot-design">Robot Design </a></li>
      <ul>
        <li><a href="#cad-parts">CAD Parts</a></li>
        <li><a href="#hardware">Hardware</a></li>
        <li><a href="software">Software</a></li>
      </ul>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>



<!-- TEAM MEMBERS -->
## Team Members

<div align="center">
    <p align = "center">Kiersten Neely, Jacob Robison, Joe, Damien</p>
</div>

<h4>Team Member Major and Class </h4>
<ul>
  <li>Kiersten - Mechanical Engineering, Ctrls & Robotics (MC34) - Class of 2025</li>
  <li>Jacob - Electrical Engineering - Class of ???</li>
  <li>Joe - ??? - Class of ???</li>
  <li>Damien - ??? - ???</li>
</ul>

<!-- Final Project -->
## Final Project

Our project goal was to develop a prototype of an autonomously driven rideshare service for UCSD students that drives to the GPS location of a pickup request, uses facial recognition to verify the identity of the student upon arrival, and then drives them to their indicated drop-off point upon identification, like a campuswide autonomous Uber. We aimed to utilize GPS navigation, OpenCV facial recognition with the OAK-D Lite, LiDAR for object avoidance, and ROS2 integration for a modularized workflow that would be efficient in simultaneous program execution and communication.

### Primary Goals:
1) Implement a facial recognition program that uses side-mounted OAK-D camera to capture live video and attempts to match face to a database containing images and names of our team members; if the face cannot be matched, i.e. the name and face of the student who requested the ride does not match the student in the video, the car will refuse pickup and return to base
2) Calibrate GPS navigation and controls algorithm (throttle, steering) for autonomous path following from base point to pickup location, and subsequently to specified dropoff coordinates if the student's identity is confirmed for ride
3) Integrate the workflow into a ROS2 environment so the multi-layered program tasks can run in tandem and communicate with each other for each step of of the process
4) (Stretch Goal) Add a method for object avoidance using LiDAR while the car is driving to pickup or drop-off locations to avoid collision and improve safety

#### Goal 1: Facial Recognition
~ ~ PIC FROM WEBCAM, OR VIDEO OF CODE BEING RUN ON LINUX ~ ~

(Talk here about the facial recognition program and libraries)

#### Goal 2: GPS and Path Following
~ ~ PIC OR VID OF CAR USING GPS TO DRIVE A PATH HERE ~ ~

(Insert updates here about GPS nav, like training the car on how to get from EBUII to EBUI and then back to EBUII to wait for the next ride request)

#### Goal 3: ROS2 Integration
~ ~ ROS WORKFLOW DIAGRAM HERE ~ ~

(Discuss the ROS pipeline we end up using and how it works)

#### Final Project Documentation

* [Final Project Proposal](https://docs.google.com/presentation/d/199oVWJiOSEHAjcmizN8rejuzU7rHNCNl4qY55uGqgxQ/edit?usp=sharing)
* Link to first progress update will go here
* Link to initial workflow/component outline
* Link to final presentation here

#### Gantt Chart

<!-- Early Quarter -->
## Robot Design

#### CAD Parts
Attach images of CAD for base plate, LiDAR/camera mount, GNSS stand/side camera mount, Jetson case (with thingiverse credit), and all other 3D printed parts we end up with here

#### Hardware
Talk about the hardware we were provided with here like battery, chassis, VESC, Jetson, GNSS puck, Oak-D etc etc and address the circuit diagram below.

![image](https://github.com/kiers-neely/ucsd-mae-148-team-4/assets/161119406/6f7501ee-382a-4590-9c0a-f8ce738efec3)


#### Software
(List the software components we used here)


<!-- ACKNOWLEDGMENTS -->
## Acknowledgments
*Thank you to Professor Jack Silberman, and our incredible TA Arjun Naageshwaran for an amazing Winter 2024 class!*

<!-- CONTACT -->
## Contact

* Kiersten Neely - kiers-neely@gmail.com | kneely@ucsd.edu
* Jacob Robison - jacoberobison@gmail.com 
* Joe - ...@gmail.com | ...@ucsd.edu
* Damien - ...@gmail.com | ...@ucsd.edu


