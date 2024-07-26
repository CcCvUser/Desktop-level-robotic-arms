// Generated by gencpp from file dobot/SetQueuedCmdClear.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETQUEUEDCMDCLEAR_H
#define DOBOT_MESSAGE_SETQUEUEDCMDCLEAR_H

#include <ros/service_traits.h>


#include <dobot/SetQueuedCmdClearRequest.h>
#include <dobot/SetQueuedCmdClearResponse.h>


namespace dobot
{

struct SetQueuedCmdClear
{

typedef SetQueuedCmdClearRequest Request;
typedef SetQueuedCmdClearResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetQueuedCmdClear
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::SetQueuedCmdClear > {
  static const char* value()
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const ::dobot::SetQueuedCmdClear&) { return value(); }
};

template<>
struct DataType< ::dobot::SetQueuedCmdClear > {
  static const char* value()
  {
    return "dobot/SetQueuedCmdClear";
  }

  static const char* value(const ::dobot::SetQueuedCmdClear&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::SetQueuedCmdClearRequest> should match 
// service_traits::MD5Sum< ::dobot::SetQueuedCmdClear > 
template<>
struct MD5Sum< ::dobot::SetQueuedCmdClearRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetQueuedCmdClear >::value();
  }
  static const char* value(const ::dobot::SetQueuedCmdClearRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetQueuedCmdClearRequest> should match 
// service_traits::DataType< ::dobot::SetQueuedCmdClear > 
template<>
struct DataType< ::dobot::SetQueuedCmdClearRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::SetQueuedCmdClear >::value();
  }
  static const char* value(const ::dobot::SetQueuedCmdClearRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::SetQueuedCmdClearResponse> should match 
// service_traits::MD5Sum< ::dobot::SetQueuedCmdClear > 
template<>
struct MD5Sum< ::dobot::SetQueuedCmdClearResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetQueuedCmdClear >::value();
  }
  static const char* value(const ::dobot::SetQueuedCmdClearResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetQueuedCmdClearResponse> should match 
// service_traits::DataType< ::dobot::SetQueuedCmdClear > 
template<>
struct DataType< ::dobot::SetQueuedCmdClearResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::SetQueuedCmdClear >::value();
  }
  static const char* value(const ::dobot::SetQueuedCmdClearResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_SETQUEUEDCMDCLEAR_H