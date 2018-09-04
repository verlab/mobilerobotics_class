# robots_roboticamovel_2018_2
Repo with the robots used at the Mobile Robotic Class 2018-2

Stage sim             |  Rviz visualization
:-------------------------:|:-------------------------:
![system](img/pioneer_stage_v1.png) <!-- .element width="200" -->  |  ![system](img/pioneer_v1.png) <!-- .element width="200" -->

### Installation

This setup was tested in ROS Kinetic, running on Ubuntu 16.04 LTS.

Install the dependencies and devDependencies and start the server.

```sh
$ cd ~/catkin_ws/src/
$ git clone https://github.com/h3ct0r/robots_roboticamovel_2018_2
$ cd ~/catkin_ws/src/
$ rosdep install --from-paths src/robots_roboticamovel_2018_2 --ignore-src -r -y
$ catkin_make
```

### Running the nodes

There are several options to running the simulations:

- Using a simple differencial robot

    ```sh
    roslaunch robots_roboticamovel_2018_2 simple_differential.launch
    ```

- Using a simple holonomic robot

    ```sh
    roslaunch robots_roboticamovel_2018_2 simple_holonomic.launch
    ```

- Using a Pioneer DX model with a 270 hokuyo laser (differencial)

    ```sh
    roslaunch robots_roboticamovel_2018_2 pioneerdx_stage_laser270.launch
    ```
    
- Using a Pioneer AT model with a 270 hokuyo laser (differencial)

    ```sh
    roslaunch robots_roboticamovel_2018_2 pioneerat_stage_laser270.launch
    ```
    
- Using a Kobuki (new turtlebot) with a 180 hokuyo laser (holonomic)

    ```sh
    roslaunch robots_roboticamovel_2018_2 kobuki_stage_laser180.launch
    ```
    
Running the teleop node to control the robot with the keyboard:
```sh
rosrun teleop_twist_keyboard teleop_twist_keyboard.py cmd_vel:=/mobile_base/commands/velocity
```

### Todos

 - Write MORE Tests

License
----

MIT


**Free Software, Hell Yeah!**
