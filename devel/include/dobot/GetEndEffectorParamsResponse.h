// Generated by gencpp from file dobot/GetEndEffectorParamsResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETENDEFFECTORPARAMSRESPONSE_H
#define DOBOT_MESSAGE_GETENDEFFECTORPARAMSRESPONSE_H


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
struct GetEndEffectorParamsResponse_
{
  typedef GetEndEffectorParamsResponse_<ContainerAllocator> Type;

  GetEndEffectorParamsResponse_()
    : result(0)
    , xBias(0.0)
    , yBias(0.0)
    , zBias(0.0)  {
    }
  GetEndEffectorParamsResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , xBias(0.0)
    , yBias(0.0)
    , zBias(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef float _xBias_type;
  _xBias_type xBias;

   typedef float _yBias_type;
  _yBias_type yBias;

   typedef float _zBias_type;
  _zBias_type zBias;





  typedef boost::shared_ptr< ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetEndEffectorParamsResponse_

typedef ::dobot::GetEndEffectorParamsResponse_<std::allocator<void> > GetEndEffectorParamsResponse;

typedef boost::shared_ptr< ::dobot::GetEndEffectorParamsResponse > GetEndEffectorParamsResponsePtr;
typedef boost::shared_ptr< ::dobot::GetEndEffectorParamsResponse const> GetEndEffectorParamsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a07055f2964cf165e2fb447024254f9f";
  }

  static const char* value(const ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa07055f2964cf165ULL;
  static const uint64_t static_value2 = 0xe2fb447024254f9fULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetEndEffectorParamsResponse";
  }

  static const char* value(const ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n"
"float32 xBias\n"
"float32 yBias\n"
"float32 zBias\n"
"\n"
;
  }

  static const char* value(const ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.xBias);
      stream.next(m.yBias);
      stream.next(m.zBias);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetEndEffectorParamsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetEndEffectorParamsResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "xBias: ";
    Printer<float>::stream(s, indent + "  ", v.xBias);
    s << indent << "yBias: ";
    Printer<float>::stream(s, indent + "  ", v.yBias);
    s << indent << "zBias: ";
    Printer<float>::stream(s, indent + "  ", v.zBias);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETENDEFFECTORPARAMSRESPONSE_H
