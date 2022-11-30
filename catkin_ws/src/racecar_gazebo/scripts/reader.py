#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Vector3
from sensor_msgs.msg import LaserScan





def callback(msg):
    l=len(msg.ranges)
    mini=msg.ranges[0]
    for i in range(l):
        if msg.ranges[i]<mini:
            mini=msg.ranges[i]
    if mini<0.00:
        flag=1
    else:
        flag=0
    pub = rospy.Publisher('chatter', Vector3, queue_size=10)
    
    data=Vector3()
    data.x=0
    data.y=0
    data.z=flag 
    pub.publish(data)
    
if __name__ == '__main__':

    rospy.init_node('talker', anonymous=True)
    rospy.Subscriber("scan", LaserScan, callback)
    rospy.spin()
    



