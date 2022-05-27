#include <ros/ros.h>
#include <std_msgs/Float64.h>
std_msgs::Float64 g_velocity;
std_msgs::Float64 g_force;
std_msgs::Float64 g_vel_cmd;

void myCallbackVelocity(const std_msgs::Float64& message_holder)
{
// checks for messages on topic "force_cmd"
ROS_INFO("received velocity value is :%f", message_holder.data);
g_velocity.data = message_holder.data;// global variable
}

void myCallbackVelCmd(const std_msgs::Float64& message_holder)
{
// checks for messages on topic "force_cmd"
ROS_INFO("received velocity_command value is :%f", message_holder.data);
g_vel_cmd.data = message_holder.data;// global variable
}


int main( int argc, char** argv)
{
	ros::init(argc, argv, "minimal_controller");//node NAME
 
	ros::NodeHandle nh;

	//create subscriber
	ros::Subscriber my_subscriber_object1 = nh.subscribe("velocity", 1, myCallbackVelocity);
	ros::Subscriber my_subscriber_object2 = nh.subscribe("vel_cmd", 1, myCallbackVelCmd);

	// public velocity
	ros::Publisher my_publisher_object = nh.advertise<std_msgs::Float64> ("force_cmd", 1);

	double Kv = 1.0; //velocity feedback gain
	double dt_controller = 0.1; // specify 10hz controller sample rate(slow)

	double sample_rate = 1.0/dt_controller;//update frequency
	ros::Rate naptime(sample_rate);//loop rate


	//init

	g_velocity.data = 0.0;
	g_force.data=0.0;
	g_vel_cmd.data=0.0;

	double vel_err = 0.0;

	while(ros::ok()) //10hz
	{
	vel_err = g_vel_cmd.data - g_velocity.data;// compute err
	g_force.data = Kv * vel_err; // proportional-only velocity-error feedback

	//force_cmd
	my_publisher_object.publish(g_force);

	ROS_INFO("force command = %f", g_force.data);
	ros::spinOnce(); // allow data update from callback
	naptime.sleep();// wait for remainder of specified period;
	}
return 0;
}
