#include "CUnitType.h"

#include <string>
#include <sstream>
#include <sqlite3.h>
//#include <sqlite3ext.h>
//#include <sqlite3rc.h>

int
query_UnitSelect(void* data, int count, char** fields, char** values) {
  CUnitType* pUnitType   = (CUnitType*)data;
  pUnitType->m_id        = (unsigned short)values[0];
  pUnitType->m_className = values[1];
  pUnitType->m_size      = (unsigned short)values[2];
  pUnitType->m_hp        = (unsigned short)values[3];
  pUnitType->m_speed     = (unsigned short)values[4];
  pUnitType->m_strength  = (unsigned short)values[5];
  pUnitType->m_defence   = (unsigned short)values[6];
  pUnitType->m_mana      = (unsigned short)values[7];
  //pUnitType->m_reqCrew = (bool)values[8];
  //pUnitType->m_damageBase = (int)values[9];
  //pUnitType->m_gatherSpeed = (int)values[10];
  //pUnitType->m_maxSpeed = (int)values[11];
  //pUnitType->m_minCrew = (int)values[12];
  //pUnitType->m_maxCrew = (int)values[13];
  //pUnitType->m_costWood = (int)values[14];
  //pUnitType->m_costStone = (int)values[15];
  //pUnitType->m_costMetal = (int)values[16];
  //pUnitType->m_costGold = (int)values[17];
  //pUnitType->m_costAether = (int)values[18];
  return 0;
}



void CUnitType::loadFullFromDB(const int typeID) {
  /***********************
  *   Access Database
  ***********************/

  sqlite3 *db;
  std::string err;
  err.resize(128);
  std::stringstream strStream;
  
  strStream << "select * from UnitType where id = " << typeID << ";";
  std::string sql = strStream.str();
  int rc = sqlite3_open("gameDB.db", &db);

  /***********************
  *  Fill Unit data with data from Database
  ***********************/
  rc = sqlite3_exec(db, sql.c_str(), query_UnitSelect, this, (char**)&err[0]);
}
