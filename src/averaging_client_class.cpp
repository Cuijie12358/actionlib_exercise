
#include <ros/ros.h>
#include <actionlib/client/simple_action_client.h>
#include <actionlib_tutorials/AveragingAction.h>

using namespace actionlib_tutorials;
typedef actionlib::SimpleActionClient<AveragingAction> Client;

// Called once when the goal completes
void doneCb(const actionlib::SimpleClientGoalState& state,
            const AveragingResultConstPtr& result)
{
  ROS_INFO("Finished in state [%s]", state.toString().c_str());
  ROS_INFO("mean: %f, std_dev: %f", result->mean,result->std_dev);
  ros::shutdown();
}

// Called once when the goal becomes active
void activeCb()
{
  ROS_INFO("Goal just went active");
}

// Called every time feedback is received for the goal
void feedbackCb(const AveragingFeedbackConstPtr& feedback)
{
  ROS_INFO("data %f, mean %f, std_dev %f ", feedback->data,feedback->mean,feedback->std_dev);
}

int main (int argc, char **argv)
{
  ros::init(argc, argv, "test_averaging_class");
  // Create the action client
  Client ac("averaging", true);

  ROS_INFO("Waiting for action server to start.");
  ac.waitForServer();
  ROS_INFO("Action server started, sending goal.");

  // Send Goal
  AveragingGoal goal;
  std::cin >> goal.samples;
  ac.sendGoal(goal, &doneCb, &activeCb, &feedbackCb);

  ros::spin();
  return 0;
}
