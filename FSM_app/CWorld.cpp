#include "CWorld.h"



CWorld::CWorld() {}


CWorld::~CWorld() {}

void CWorld::createUnit(int x, int y, int type_id, int player_id) {
  CUnit unit = *new CUnit();
  unit.init(player_id, type_id);
  m_vecUnit.push_back(&unit);
}

void CWorld::createUnitType(int type_id) {}

CUnit * CWorld::getUnit(int id_unit) {
  return nullptr;
}

CUnitType * CWorld::getUnitType(int id_type) {
  return nullptr;
}

vector<CUnit*> CWorld::getUnitsInArea(int x, int y, float radius) {
  return vector<CUnit*>();
}
