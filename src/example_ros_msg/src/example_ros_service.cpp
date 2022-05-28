// run as : rosrun example_ros_service example_ros_service
// 
// in another window, 
// 	rosservice call lookup_by_name "Ted"
//
#include <ros/ros.h>
// I did not create new package due to my slothing
#include <example_ros_msg/ExampleServiceMsg.h>
#include <iostream>
#include <string>

//using namespace std;
using std::string;
using std::cout;
using std::endl;


bool callback( example_ros_msg::ExampleServiceMsgRequest& request,
			example_ros_msg::ExampleServiceMsgResponse& response)
{
	ROS_INFO("callback activated");
	string in_name(request.name);
	response.on_the_list = false;

	//stupid database
	if(in_name.compare("Bob") ==0)
	{
	ROS_INFO("asked about Bob");
	response.age = 32;
	response.good_guy = false;
	response.on_the_list = true;
	response.nickname = "BobTheTerrible";
	}
	if(in_name.compare("Alice") ==0)
	{
	ROS_INFO("asked about Alice");
	response.age = 32;
	response.good_guy = false;
	response.on_the_list = true;
	response.nickname = "AliceTheTerrible";
	}
//...


return true;// callback's return
	// reply response implicitly
}

int main(int argc, char**argv)
{
	ros::init(argc, argv, "example_ros_service");
	ros::NodeHandle n ;
	ros::ServiceServer service =
		n.advertiseService("lookup_by_name", callback);

	ROS_INFO("Ready to look up names. ");
	ros::spin();

	return 0;

}
