#include <ros/ros.h>
#include <std_msgs/Float64.h>

void myCallback( const std_msgs::Float64& message_holder)
{
	ROS_INFO("received value is :%f", message_holder.data); // printf grammer
	ROS_INFO_STREAM("received value is :" << message_holder.data <<  std::endl);// cout grammer
}


int main(int argc, char ** argv)
{
	ros::init(argc, argv,"minimal_subscriber");

	ros::NodeHandle n;

	ros::Subscriber my_subscriber_object = n.subscribe("topic1", 1 , myCallback);

	ros::spin() ; // this is essentially a "while (1) " statement, except it 
					// forces refreshing wakeups upon new data arrival
					// main program essentially hangs here,
					// but it must stay alive to keep the callback
					// function alive.

	return 0; // should never get here, unless roscore dies.

}

