#pragma once
#include <stack>
#include "UnitState.h"


class UnitFSM
{
public:
  UnitFSM();
  ~UnitFSM();

  std::stack<UnitState*> m_stkUnitState;

};

