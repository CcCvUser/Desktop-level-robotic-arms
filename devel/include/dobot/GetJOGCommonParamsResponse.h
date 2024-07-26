// Generated by gencpp from file dobot/GetJOGCommonParamsResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETJOGCOMMONPARAMSRESPONSE_H
#define DOBOT_MESSAGE_GETJOGCOMMONPARAMSRESPONSE_H


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
struct GetJOGCommonParamsResponse_
{
  typedef GetJOGCommonParamsResponse_<ContainerAllocator> Type;

  GetJOGCommonParamsResponse_()
    : result(0)
    , velocityRatio(0.0)
    , accelerationRatio(0.0)  {
    }
  GetJOGCommonParamsResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , velocityRatio(0.0)
    , accelerationRatio(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef float _velocityRatio_type;
  _velocityRatio_type velocityRatio;

   typedef float _accelerationRatio_type;
  _accelerationRatio_type accelerationRatio;





  typedef boost::shared_ptr< ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetJOGCommonParamsResponse_

typedef ::dobot::GetJOGCommonParamsResponse_<std::allocator<void> > GetJOGCommonParamsResponse;

typedef boost::shared_ptr< ::dobot::GetJOGCommonParamsResponse > GetJOGCommonParamsResponsePtr;
typedef boost::shared_ptr< ::dobot::GetJOGCommonParamsResponse const> GetJOGCommonParamsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ccb42558fae0625dedee5118e81add9a";
  }

  static const char* value(const ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xccb42558fae0625dULL;
  static const uint64_t static_value2 = 0xedee5118e81add9aULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetJOGCommonParamsResponse";
  }

  static const char* value(const ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n"
"float32 velocityRatio\n"
"float32 accelerationRatio\n"
"\n"
;
  }

  static const char* value(const ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.velocityRatio);
      stream.next(m.accelerationRatio);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetJOGCommonParamsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetJOGCommonParamsResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "velocityRatio: ";
    Printer<float>::stream(s, indent + "  ", v.velocityRatio);
    s << indent << "accelerationRatio: ";
    Printer<float>::stream(s, indent + "  ", v.accelerationRatio);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETJOGCOMMONPARAMSRESPONSE_H
