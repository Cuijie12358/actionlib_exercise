# actionlib_exercise
This is an exercise and many of the codes are from tutorials,but I modified a little.
## platform
ROS kinetic
## Filesystem
* action
    * Fibonacci.action  
    The same as Beginner Tutorials [online](http://wiki.ros.org/actionlib_tutorials/Tutorials).
    * Averaging.action  
    The same as Intermediate Level [online](http://wiki.ros.org/actionlib_tutorials/Tutorials).
* msg  
random numbers sending from "/random_number" topic (different from [ROS_wiki](http://wiki.ros.org/actionlib_tutorials/Tutorials/RunningServerAndClientWithNodes))  
Messages generate automatically after  
```
catkin_make  
```  
* src  
     * averaging_client.cpp  
     Add the input from keyboard, it means you will send an number as a goal to the action_server after running this client.
     * averaging_server.cpp  
     Add includes from deactionlib_tutorials/random_number. 
     * fibonacci_client.cpp  
     The same as Beginner Tutorials [online](http://wiki.ros.org/actionlib_tutorials/Tutorials).   
     * fibonacci_server.cpp  
     The same as Beginner Tutorials [online](http://wiki.ros.org/actionlib_tutorials/Tutorials).  
     * random_number.cpp  
     Sending the random numbers. I didn't notice the following tutorial has written the msg :p  
## Test
```
catkin_make 
roscore
```  
In different terminals:
```
rosrun actionlib_tutorials averaging_client   
```  
