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
    The type of the message is actionlib_tutorials/random_number.    
    Add the 
    * averaging_server.cpp
    * fibonacci_client.cpp
    * fibonacci_server.cpp
    * random_number.cpp

