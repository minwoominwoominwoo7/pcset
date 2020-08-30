
alias vr='vim ~/.bashrc'
alias eb='nano ~/.bashrc'
alias sb='source ~/.bashrc'
alias killgazebo='killall -9 gazebo & killall -9 gzserver  & killall -9 gzclient'

alias cw='cd ~/turtlebot3_ws'
alias cs='cd ~/turtlebot3_ws/src'

alias cb='cd ~/turtlebot3_ws && colcon build --symlink-install'
alias cbp='cd ~/turtlebot3_ws && colcon build --symlink-install --packages-select'

alias rt='ros2 topic list'
alias re='ros2 topic echo'
alias rn='ros2 node list'
alias af='ament_flake8'
alias ac='ament_cpplint'

alias testpub='ros2 run demo_nodes_cpp talker'
alias testsub='ros2 run demo_nodes_cpp listener'
alias testpubimg='ros2 run image_tools cam2image'
alias testsubimg='ros2 run image_tools showimage'

alias ros2_init='. /opt/ros/foxy/setup.bash'
alias all_init='. ~/turtlebot3_ws/install/local_setup.bash'

source /opt/ros/foxy/setup.bash
alias sb='source ~/.bashrc'
source ~/turtlebot3_ws/install/setup.bash
export ROS_DOMAIN_ID=87 #TURTLEBOT3
#export TURTLEBOT3_MODEL=burger
export TURTLEBOT3_MODEL=waffle
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/turtlebot3_ws/src/turtlebot3/turtlebot3_simulations/turtlebot3_gazebo/models
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/turtlebot3_ws/src/turtlebot3/turtlebot3_simulations/turtlebot3_gazebo/models/turtlebot3_dqn_soccer
