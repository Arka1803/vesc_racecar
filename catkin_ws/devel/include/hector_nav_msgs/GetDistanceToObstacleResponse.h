// Generated by gencpp from file hector_nav_msgs/GetDistanceToObstacleResponse.msg
// DO NOT EDIT!


#ifndef HECTOR_NAV_MSGS_MESSAGE_GETDISTANCETOOBSTACLERESPONSE_H
#define HECTOR_NAV_MSGS_MESSAGE_GETDISTANCETOOBSTACLERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PointStamped.h>

namespace hector_nav_msgs
{
template <class ContainerAllocator>
struct GetDistanceToObstacleResponse_
{
  typedef GetDistanceToObstacleResponse_<ContainerAllocator> Type;

  GetDistanceToObstacleResponse_()
    : distance(0.0)
    , end_point()  {
    }
  GetDistanceToObstacleResponse_(const ContainerAllocator& _alloc)
    : distance(0.0)
    , end_point(_alloc)  {
  (void)_alloc;
    }



   typedef float _distance_type;
  _distance_type distance;

   typedef  ::geometry_msgs::PointStamped_<ContainerAllocator>  _end_point_type;
  _end_point_type end_point;





  typedef boost::shared_ptr< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetDistanceToObstacleResponse_

typedef ::hector_nav_msgs::GetDistanceToObstacleResponse_<std::allocator<void> > GetDistanceToObstacleResponse;

typedef boost::shared_ptr< ::hector_nav_msgs::GetDistanceToObstacleResponse > GetDistanceToObstacleResponsePtr;
typedef boost::shared_ptr< ::hector_nav_msgs::GetDistanceToObstacleResponse const> GetDistanceToObstacleResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator1> & lhs, const ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator2> & rhs)
{
  return lhs.distance == rhs.distance &&
    lhs.end_point == rhs.end_point;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator1> & lhs, const ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hector_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "019a8fc3bf7fd73c014dc08523397f1c";
  }

  static const char* value(const ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x019a8fc3bf7fd73cULL;
  static const uint64_t static_value2 = 0x014dc08523397f1cULL;
};

template<class ContainerAllocator>
struct DataType< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hector_nav_msgs/GetDistanceToObstacleResponse";
  }

  static const char* value(const ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 distance\n"
"geometry_msgs/PointStamped end_point\n"
"\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PointStamped\n"
"# This represents a Point with reference coordinate frame and timestamp\n"
"Header header\n"
"Point point\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance);
      stream.next(m.end_point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetDistanceToObstacleResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator>& v)
  {
    s << indent << "distance: ";
    Printer<float>::stream(s, indent + "  ", v.distance);
    s << indent << "end_point: ";
    s << std::endl;
    Printer< ::geometry_msgs::PointStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.end_point);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HECTOR_NAV_MSGS_MESSAGE_GETDISTANCETOOBSTACLERESPONSE_H
