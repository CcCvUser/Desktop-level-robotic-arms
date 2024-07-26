// Generated by gencpp from file dobot/SetEndEffectorLaserRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETENDEFFECTORLASERREQUEST_H
#define DOBOT_MESSAGE_SETENDEFFECTORLASERREQUEST_H


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
struct SetEndEffectorLaserRequest_
{
  typedef SetEndEffectorLaserRequest_<ContainerAllocator> Type;

  SetEndEffectorLaserRequest_()
    : enableCtrl(0)
    , on(0)
    , isQueued(false)  {
    }
  SetEndEffectorLaserRequest_(const ContainerAllocator& _alloc)
    : enableCtrl(0)
    , on(0)
    , isQueued(false)  {
  (void)_alloc;
    }



   typedef uint8_t _enableCtrl_type;
  _enableCtrl_type enableCtrl;

   typedef uint8_t _on_type;
  _on_type on;

   typedef uint8_t _isQueued_type;
  _isQueued_type isQueued;





  typedef boost::shared_ptr< ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetEndEffectorLaserRequest_

typedef ::dobot::SetEndEffectorLaserRequest_<std::allocator<void> > SetEndEffectorLaserRequest;

typedef boost::shared_ptr< ::dobot::SetEndEffectorLaserRequest > SetEndEffectorLaserRequestPtr;
typedef boost::shared_ptr< ::dobot::SetEndEffectorLaserRequest const> SetEndEffectorLaserRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "31a17e9637c3a452d332805afc81b7af";
  }

  static const char* value(const ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x31a17e9637c3a452ULL;
  static const uint64_t static_value2 = 0xd332805afc81b7afULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetEndEffectorLaserRequest";
  }

  static const char* value(const ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 enableCtrl\n"
"uint8 on\n"
"bool isQueued\n"
;
  }

  static const char* value(const ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enableCtrl);
      stream.next(m.on);
      stream.next(m.isQueued);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetEndEffectorLaserRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetEndEffectorLaserRequest_<ContainerAllocator>& v)
  {
    s << indent << "enableCtrl: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enableCtrl);
    s << indent << "on: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.on);
    s << indent << "isQueued: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isQueued);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETENDEFFECTORLASERREQUEST_H
