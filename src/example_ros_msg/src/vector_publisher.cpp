#include <ros/ros.h>
#include <example_ros_msg/VecOfDoubles.h>

int main(int argc, char**argv)

{
	ros::init(argc,argv, "vector_publisher");
	ros::NodeHandle n;

	ros::Publisher my_publisher_object = n.advertise<example_ros_msg::VecOfDoubles>("vec_topic", 1);

	example_ros_msg::VecOfDoubles vec_msg;
	double counter = 0;
	ros::Rate naptime(1.0);

	//is some vector  
	// std::vector<double , some_allocator>
	// .msg defined vec_msg  
	// 			float64[] db1_vec
	vec_msg.db1_vec.resize(3);
	vec_msg.db1_vec[0] = 1.414;  
	vec_msg.db1_vec[1] = 2.71;  
	vec_msg.db1_vec[2] = 3.1416;  


	vec_msg.db1_vec.push_back(counter);


	while(ros::ok()) {
		counter+= 1.0;
		vec_msg.db1_vec.push_back(counter);
		my_publisher_object.publish(vec_msg);

		naptime.sleep();
	}

	return 0;
}


