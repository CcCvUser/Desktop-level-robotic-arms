// Generated by gencpp from file dobot/GetIODIResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETIODIRESPONSE_H
#define DOBOT_MESSAGE_GETIODIRESPONSE_H


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
struct GetIODIResponse_
{
  typedef GetIODIResponse_<ContainerAllocator> Type;

  GetIODIResponse_()
    : result(0)
    , level(0)  {
    }
  GetIODIResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , level(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef uint8_t _level_type;
  _level_type level;





  typedef boost::shared_ptr< ::dobot::GetIODIResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetIODIResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetIODIResponse_

typedef ::dobot::GetIODIResponse_<std::allocator<void> > GetIODIResponse;

typedef boost::shared_ptr< ::dobot::GetIODIResponse > GetIODIResponsePtr;
typedef boost::shared_ptr< ::dobot::GetIODIResponse const> GetIODIResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetIODIResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetIODIResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::GetIODIResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetIODIResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetIODIResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetIODIResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetIODIResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetIODIResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetIODIResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a8bc3cdda7ff2068a4fcc1cb8c3cab2";
  }

  static const char* value(const ::dobot::GetIODIResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a8bc3cdda7ff206ULL;
  static const uint64_t static_value2 = 0x8a4fcc1cb8c3cab2ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetIODIResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetIODIResponse";
  }

  static const char* value(const ::dobot::GetIODIResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetIODIResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n"
"uint8 level\n"
"\n"
;
  }

  static const char* value(const ::dobot::GetIODIResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetIODIResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.level);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetIODIResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetIODIResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetIODIResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "level: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.level);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETIODIRESPONSE_H
