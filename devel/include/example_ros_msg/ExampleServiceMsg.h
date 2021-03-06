// Generated by gencpp from file example_ros_msg/ExampleServiceMsg.msg
// DO NOT EDIT!


#ifndef EXAMPLE_ROS_MSG_MESSAGE_EXAMPLESERVICEMSG_H
#define EXAMPLE_ROS_MSG_MESSAGE_EXAMPLESERVICEMSG_H

#include <ros/service_traits.h>


#include <example_ros_msg/ExampleServiceMsgRequest.h>
#include <example_ros_msg/ExampleServiceMsgResponse.h>


namespace example_ros_msg
{

struct ExampleServiceMsg
{

typedef ExampleServiceMsgRequest Request;
typedef ExampleServiceMsgResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ExampleServiceMsg
} // namespace example_ros_msg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::example_ros_msg::ExampleServiceMsg > {
  static const char* value()
  {
    return "f97a354dfffac1c8b57b631851a700a0";
  }

  static const char* value(const ::example_ros_msg::ExampleServiceMsg&) { return value(); }
};

template<>
struct DataType< ::example_ros_msg::ExampleServiceMsg > {
  static const char* value()
  {
    return "example_ros_msg/ExampleServiceMsg";
  }

  static const char* value(const ::example_ros_msg::ExampleServiceMsg&) { return value(); }
};


// service_traits::MD5Sum< ::example_ros_msg::ExampleServiceMsgRequest> should match
// service_traits::MD5Sum< ::example_ros_msg::ExampleServiceMsg >
template<>
struct MD5Sum< ::example_ros_msg::ExampleServiceMsgRequest>
{
  static const char* value()
  {
    return MD5Sum< ::example_ros_msg::ExampleServiceMsg >::value();
  }
  static const char* value(const ::example_ros_msg::ExampleServiceMsgRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::example_ros_msg::ExampleServiceMsgRequest> should match
// service_traits::DataType< ::example_ros_msg::ExampleServiceMsg >
template<>
struct DataType< ::example_ros_msg::ExampleServiceMsgRequest>
{
  static const char* value()
  {
    return DataType< ::example_ros_msg::ExampleServiceMsg >::value();
  }
  static const char* value(const ::example_ros_msg::ExampleServiceMsgRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::example_ros_msg::ExampleServiceMsgResponse> should match
// service_traits::MD5Sum< ::example_ros_msg::ExampleServiceMsg >
template<>
struct MD5Sum< ::example_ros_msg::ExampleServiceMsgResponse>
{
  static const char* value()
  {
    return MD5Sum< ::example_ros_msg::ExampleServiceMsg >::value();
  }
  static const char* value(const ::example_ros_msg::ExampleServiceMsgResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::example_ros_msg::ExampleServiceMsgResponse> should match
// service_traits::DataType< ::example_ros_msg::ExampleServiceMsg >
template<>
struct DataType< ::example_ros_msg::ExampleServiceMsgResponse>
{
  static const char* value()
  {
    return DataType< ::example_ros_msg::ExampleServiceMsg >::value();
  }
  static const char* value(const ::example_ros_msg::ExampleServiceMsgResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // EXAMPLE_ROS_MSG_MESSAGE_EXAMPLESERVICEMSG_H
