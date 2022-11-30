#!/usr/bin/env python
import rospy

from geometry_msgs.msg import Vector3

import sys, select, termios, tty

banner = """
Reading from the keyboard  and Publishing to AckermannDriveStamped!
---------------------------
Moving around:
        w
   a    s    d
anything else : stop
CTRL-C to quit
"""

keyBindings = {
  'w':(1,0),
  'd':(1,-1),
  'a':(1,1),
  's':(-1,0),
}

def getKey():
   tty.setraw(sys.stdin.fileno())
   select.select([sys.stdin], [], [], 0)
   key = sys.stdin.read(1)
   termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
   return key

speed = 0.5
turn = 0.25

def vels(speed,turn):
  return "currently:\tspeed %s\tturn %s " % (speed,turn)

def cb(data):
  global indic
  indic=data.z
  

if __name__=="__main__":
  settings = termios.tcgetattr(sys.stdin)
  pub = rospy.Publisher('/teleop', Vector3)
  rospy.init_node('keyop')
  rospy.Subscriber("chatter", Vector3, cb)

  x = 0
  th = 0
  status = 0
  global indic

  try:
    while(1):
       key = getKey()
       if key in keyBindings.keys():
          x = keyBindings[key][0]
          th = keyBindings[key][1]
       else:
          x = 0
          th = 0
          if (key == '\x03'):
             break
       msg = Vector3();
       msg.x = x;
       msg.y=th;
       msg.z=indic;
       

       pub.publish(msg)

  except:
    print('error')

  finally:
    msg = Vector3();
    msg.x = 0;
    msg.y=0;
    msg.z=1.00
    pub.publish(msg)

    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)