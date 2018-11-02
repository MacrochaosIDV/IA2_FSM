#pragma once
#include "CMenuScreen.h"
class CHelp :
  public CMenuScreen
{
public:
  CHelp();
  ~CHelp();
  CHelp(CMenuApp * _app);

  void onEnter();
  bool onUpdate(sf::RenderWindow& _window, sf::Event& _event);
  void onExit();
  void draw(sf::RenderWindow& _window);

  CButton_ btnBack;
};

