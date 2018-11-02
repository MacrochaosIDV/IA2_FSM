#pragma once

#include "SFML_Include.h"
#include <vector>

#include "CButton_.h"

class CMenuApp;
class CMenuScreen
{
public:
  CMenuScreen();
  ~CMenuScreen();
  CMenuScreen(CMenuApp* _app);

  virtual void onEnter() = 0;
  virtual bool onUpdate(sf::RenderWindow& _window, sf::Event& _event) = 0;
  virtual void onExit() = 0;
  void setApp(CMenuApp* p_app);
  virtual void draw(sf::RenderWindow& _window) = 0;

  CMenuApp* mp_app;
};

