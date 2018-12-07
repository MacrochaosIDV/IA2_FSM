#pragma once
#include "SFML_Include.h"
class UnitState
{
public:
  UnitState();
  ~UnitState();

  virtual bool onEnter() = 0;
  virtual bool onUpdate(sf::RenderWindow _window) = 0;
  virtual bool onExit() = 0;

  virtual void draw() = 0;

};

