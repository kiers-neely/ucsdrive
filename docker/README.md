# Running UCSDrive! packages in Docker container

To make it a little easier for cross-platform execution of our custom ROS packages, there is now a Docker image that can easily be pulled and run on a Linux amd64 host machine or the arm64 architecture on the Jetson Nano.

## Jetson Nano steps

Make sure host has X11 forwarding activated and SSH into the Jetson - for our team that will look like:

```console
user@host:~/$ xhost +
user@host:~/$ ssh -X jetson@ucsdrobocar-xxx-yy
```

Then pull the image, as it's multi-platform it should pull the arm64 image automatically

```bash
docker pull kierstenneely/ucsdrive:latest
```

Once the image is available, **make sure to run the container with these arguments or else the container won't allow access to the camera port**:

```bash
docker run --name ucsdrive-container -it --privileged --net=host -e DISPLAY=$DISPLAY -v /dev/bus/usb:/dev/bus/usb --device-cgroup-rule='c 189:* rmw' --device /dev/video0 --volume="$HOME/.Xauthority:/root/.Xauthority:rw" kierstenneely/ucsdrive:latest
```

And if all has worked, you should see something like

```console
root@containerid:/home/projects/ucsdrive/$
```

where you can now build and source ROS2 to get everything running.

```bash
colcon build
source install/setup.bash
ros2 run face_rec_pkg face_publisher
```

## Shortcuts

To make our lives a little easier we can add a command to the Jetson's `.bashrc` like we did to run the `ucsd_robocar` container easily. Right now of we open the bash script

```bash
gedit ~/.bashrc
```

we should see this at the bottom from when we added it before:

```
robocar_docker ()
{
    docker run \
    --name ${1}\
    -it \
    --privileged \
    --net=host \
    -e DISPLAY=$DISPLAY \
    -v /dev/bus/usb:/dev/bus/usb \
    --device-cgroup-rule='c 189:* rmw' \
    --device /dev/video0 \
    --volume="$HOME/.Xauthority:/root/.Xauthority:rw" \
    djnighti/ucsd_robocar:${2:-devel}
}
```

So, underneath that, if we paste the new addition:

```
ucsdrive_docker ()
{
    docker run \
    --name ${1}\
    -it \
    --privileged \
    --net=host \
    -e DISPLAY=$DISPLAY \
    -v /dev/bus/usb:/dev/bus/usb \
    --device-cgroup-rule='c 189:* rmw' \
    --device /dev/video0 \
    --volume="$HOME/.Xauthority:/root/.Xauthority:rw" \
    kierstenneely/ucsdrive:latest
}
```

we should now be able to use the following command to run a UCSDrive! container called `project_container`, complete with ROS2 and all the necessary libraries (`opencv-python`, `dlib` and `face_recognition`) to use the ROS2 facial recognition nodes:

```bash
ucsdrive_docker(project_container)
```

and we can still use this command to open up a UCSD Robocar container in another terminal:

```bash
robocar_docker(robo_container)
```

## TODO: Combined layer image

We're still working on developing an image that is simply built on top of the `ucsd_robocar` image, at which point we'd have everything running in the same container.

Also, since the container image already has a `git clone` of this project repository, try running `git pull` in the project directory to make sure it's up to date.




