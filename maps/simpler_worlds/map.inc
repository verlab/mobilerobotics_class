define floorplan model
(
  # sombre, sensible, artistic
  color "gray30"

  # most maps will need a bounding box
  boundary 1

  gui_nose 0
  gui_grid 0
  gui_move 0
  gui_outline 0
  gripper_return 0
  fiducial_return 0
  ranger_return 0.5
  laser_return 1

  obstacle_return 0
)

define zone model
(
  color	"orange"
  size [ 4 4 0.01 ]

  gui_nose 0
  gui_grid 0
  gui_move 1
  gui_outline 0

  # insensible to collision and range sensors
  obstacle_return 0
  ranger_return -1  # transparent to range sensors
)