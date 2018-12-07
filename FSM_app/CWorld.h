#pragma once
#include <vector>
#include "CUnit.h"
#include "CUnitType.h"

using std::vector;

class CWorld
{
public:
  CWorld();
  ~CWorld();

  void createUnit(int x, int y, int type_id, int player_id);
  void createUnitType(int type_id);
  CUnit* getUnit(int id_unit);
  CUnitType* getUnitType(int id_type);
  vector<CUnit*> getUnitsInArea(int x, int y, float radius);

  vector<CUnit*> m_vecUnit;
  vector<CUnitType*> m_vecUnitType;

};

