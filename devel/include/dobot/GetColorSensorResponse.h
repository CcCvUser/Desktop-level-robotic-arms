// Generated by gencpp from file dobot/GetColorSensorResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETCOLORSENSORRESPONSE_H
#define DOBOT_MESSAGE_GETCOLORSENSORRESPONSE_H


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
struct GetColorSensorResponse_
{
  typedef GetColorSensorResponse_<ContainerAllocator> Type;

  GetColorSensorResponse_()
    : result(0)
    , r(0)
    , g(0)
    , b(0)  {
    }
  GetColorSensorResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , r(0)
    , g(0)
    , b(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef uint8_t _r_type;
  _r_type r;

   typedef uint8_t _g_type;
  _g_type g;

   typedef uint8_t _b_type;
  _b_type b;





  typedef boost::shared_ptr< ::dobot::GetColorSensorResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetColorSensorResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetColorSensorResponse_

typedef ::dobot::GetColorSensorResponse_<std::allocator<void> > GetColorSensorResponse;

typedef boost::shared_ptr< ::dobot::GetColorSensorResponse > GetColorSensorResponsePtr;
typedef boost::shared_ptr< ::dobot::GetColorSensorResponse const> GetColorSensorResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetColorSensorResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetColorSensorResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::GetColorSensorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetColorSensorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetColorSensorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetColorSensorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetColorSensorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetColorSensorResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetColorSensorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1596aa7baed44f60a5db0d6e3455a3e9";
  }

  static const char* value(const ::dobot::GetColorSensorResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1596aa7baed44f60ULL;
  static const uint64_t static_value2 = 0xa5db0d6e3455a3e9ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetColorSensorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetColorSensorResponse";
  }

  static const char* value(const ::dobot::GetColorSensorResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetColorSensorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n"
"uint8 r\n"
"uint8 g\n"
"uint8 b\n"
"\n"
"\n"
;
  }

  static const char* value(const ::dobot::GetColorSensorResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetColorSensorResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.r);
      stream.next(m.g);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetColorSensorResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetColorSensorResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetColorSensorResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "r: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.r);
    s << indent << "g: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.g);
    s << indent << "b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETCOLORSENSORRESPONSE_H
