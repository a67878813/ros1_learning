#include <ros/ros.h>
#include <example_ros_msg/VecOfDoubles.h>

void myCallback(const example_ros_msg::VecOfDoubles& message_holder)

{
	std::vector<double> vec_of_doubles = message_holder.db1_vec;

	int nvals = vec_of_doubles.size();// ask the vector how long it is 

	for (int i =0; i<nvals; ++i)
	{
		ROS_INFO("vec [%d] = %f" ,i,vec_of_doubles[i] ); //print out all values.
	}
		ROS_INFO("\n");


}
int main(int argc, char**argv)

{
	ros::init(argc,argv, "vector_subscriber");
	ros::NodeHandle n; // is needed to establish communications with new node

	ros::Subscriber my_subscriber_object = n.subscribe("vec_topic", 1, myCallback);

	ros::spin();
	return 0;
}


