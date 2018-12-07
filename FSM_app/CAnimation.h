#pragma once
namespace UnitAnimation {
  enum E
  {
    IDLE = 0,
    MOVE,
    DEAD,
    ATTACK,
    COUNT_ANIM
  };
}

namespace DirAnimation {
  enum E
  {
    NORTH = 0,
    NORTH_W = 1,
    WEST = 2,
    SOUTH_W = 3,
    SOUTH = 4,
    SOUTH_E = SOUTH_W,
    EAST = WEST,
    NORTH_E = NORTH_W,
    COUNT_DIR = 5
  };
}

class CAnimation
{
public:
  CAnimation();
  ~CAnimation();

  //Rect m_imgFrames[COUNT_ANIM][COUNT_DIR];
};

