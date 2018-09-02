define kinect ranger
(
  sensor
  (
    range_max 6.5
    fov 58.0
    samples 640
  )
  # generic model properties
  color "black"
  size [ 0.06 0.15 0.03 ]
)

#define hokuyolaser ranger
#(
#  sensor(       
#    range [ 0.0  5.0 ]
#    fov 270
#   samples 270
#  )
#
#  # generic model properties
#  color "blue"
#  size [ 0.07 0.07 0.05 ] # dimensions from LMS200 data sheet 
#)

define hokuyolaser ranger
(
  # laser-specific properties
  # factory settings for LMS200 
  sensor(
    range [ 0.0 8.0 ]
    fov 180.0
    samples 361
  )

  #samples 90 # still useful but much faster to compute

  # generic model properties
  color "blue"
  size [ 0.156 0.155 0.19 ] # dimensions from LMS200 data sheet 
)

define turtlebot position
(
  pose [ 0.0 0.0 0.0 0.0 ]

  odom_error [0.03 0.03 999999 999999 999999 0.02]

  size [ 0.2552 0.2552 0.40 ]
  origin [ 0.0 0.0 0.0 0.0 ]
  gui_nose 1
  drive "omni"
  color "gray"
  
  hokuyolaser(pose [ -0.1 0.0 -0.11 0.0 ])
)
