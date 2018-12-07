#pragma once
#include "CUnitType.h"
class CUnit
{
public:
  CUnit() = default;
  CUnit(CUnitType* type);
  ~CUnit();

  void init(int _idPlayer, int _idType);

  CUnitType* m_type;
  int m_controlingPlayer;
};

