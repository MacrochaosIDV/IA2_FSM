#pragma once
#include <string>
class CUnitType
{
public:
  CUnitType() = default;
  ~CUnitType() = default;

  void
  loadFullFromDB(const int typeID);

  void
  loadImgFromFile();

  unsigned short m_id;
  std::string m_className;
  unsigned short m_size;
  unsigned short m_hp;
  unsigned short m_speed;
  unsigned short m_strength;
  unsigned short m_defence;
  unsigned short m_mana;
};

