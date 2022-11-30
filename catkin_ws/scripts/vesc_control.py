#!/usr/bin/env python
import rospy
from std_msgs.msg import Float64

if __name__ == '__main__':
    try:
        rospy.init_node('vesc_control', anonymous=False)
        pub = rospy.Publisher('/commands/motor/speed', Float64, queue_size=10)
        rate = rospy.Rate(10)
        while not rospy.is_shutdown():
            pub.publish(Float64(0.3))
            rate.sleep() 
    except rospy.ROSInterruptException:
        pub.publish(Float64(0))

    
    
