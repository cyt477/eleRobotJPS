// Generated by gencpp from file rokae_pick_place_with_vacuum_gripper/GripperStateResponse.msg
// DO NOT EDIT!


#ifndef ROKAE_PICK_PLACE_WITH_VACUUM_GRIPPER_MESSAGE_GRIPPERSTATERESPONSE_H
#define ROKAE_PICK_PLACE_WITH_VACUUM_GRIPPER_MESSAGE_GRIPPERSTATERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rokae_pick_place_with_vacuum_gripper
{
template <class ContainerAllocator>
struct GripperStateResponse_
{
  typedef GripperStateResponse_<ContainerAllocator> Type;

  GripperStateResponse_()
    : feedback()  {
    }
  GripperStateResponse_(const ContainerAllocator& _alloc)
    : feedback(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _feedback_type;
  _feedback_type feedback;





  typedef boost::shared_ptr< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GripperStateResponse_

typedef ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<std::allocator<void> > GripperStateResponse;

typedef boost::shared_ptr< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse > GripperStateResponsePtr;
typedef boost::shared_ptr< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse const> GripperStateResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator1> & lhs, const ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator2> & rhs)
{
  return lhs.feedback == rhs.feedback;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator1> & lhs, const ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rokae_pick_place_with_vacuum_gripper

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c14cdf907e5c7c7fd47292add15660f0";
  }

  static const char* value(const ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc14cdf907e5c7c7fULL;
  static const uint64_t static_value2 = 0xd47292add15660f0ULL;
};

template<class ContainerAllocator>
struct DataType< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rokae_pick_place_with_vacuum_gripper/GripperStateResponse";
  }

  static const char* value(const ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#response fields\n"
"string feedback\n"
"\n"
;
  }

  static const char* value(const ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GripperStateResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rokae_pick_place_with_vacuum_gripper::GripperStateResponse_<ContainerAllocator>& v)
  {
    s << indent << "feedback: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROKAE_PICK_PLACE_WITH_VACUUM_GRIPPER_MESSAGE_GRIPPERSTATERESPONSE_H
