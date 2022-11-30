// Generated by gencpp from file nodelet/NodeletListRequest.msg
// DO NOT EDIT!


#ifndef NODELET_MESSAGE_NODELETLISTREQUEST_H
#define NODELET_MESSAGE_NODELETLISTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nodelet
{
template <class ContainerAllocator>
struct NodeletListRequest_
{
  typedef NodeletListRequest_<ContainerAllocator> Type;

  NodeletListRequest_()
    {
    }
  NodeletListRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::nodelet::NodeletListRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nodelet::NodeletListRequest_<ContainerAllocator> const> ConstPtr;

}; // struct NodeletListRequest_

typedef ::nodelet::NodeletListRequest_<std::allocator<void> > NodeletListRequest;

typedef boost::shared_ptr< ::nodelet::NodeletListRequest > NodeletListRequestPtr;
typedef boost::shared_ptr< ::nodelet::NodeletListRequest const> NodeletListRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nodelet::NodeletListRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nodelet::NodeletListRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace nodelet

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nodelet::NodeletListRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nodelet::NodeletListRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nodelet::NodeletListRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nodelet::NodeletListRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nodelet::NodeletListRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nodelet::NodeletListRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nodelet::NodeletListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::nodelet::NodeletListRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::nodelet::NodeletListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nodelet/NodeletListRequest";
  }

  static const char* value(const ::nodelet::NodeletListRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nodelet::NodeletListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::nodelet::NodeletListRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nodelet::NodeletListRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NodeletListRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nodelet::NodeletListRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::nodelet::NodeletListRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // NODELET_MESSAGE_NODELETLISTREQUEST_H