// Generated by gencpp from file dobot/ClearAllAlarmsStateRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_CLEARALLALARMSSTATEREQUEST_H
#define DOBOT_MESSAGE_CLEARALLALARMSSTATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dobot
{
template <class ContainerAllocator>
struct ClearAllAlarmsStateRequest_
{
  typedef ClearAllAlarmsStateRequest_<ContainerAllocator> Type;

  ClearAllAlarmsStateRequest_()
    {
    }
  ClearAllAlarmsStateRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ClearAllAlarmsStateRequest_

typedef ::dobot::ClearAllAlarmsStateRequest_<std::allocator<void> > ClearAllAlarmsStateRequest;

typedef boost::shared_ptr< ::dobot::ClearAllAlarmsStateRequest > ClearAllAlarmsStateRequestPtr;
typedef boost::shared_ptr< ::dobot::ClearAllAlarmsStateRequest const> ClearAllAlarmsStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dobot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'dobot': ['/home/student/catkin_ws/src/dobot/dobot/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/ClearAllAlarmsStateRequest";
  }

  static const char* value(const ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ClearAllAlarmsStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::dobot::ClearAllAlarmsStateRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_CLEARALLALARMSSTATEREQUEST_H
