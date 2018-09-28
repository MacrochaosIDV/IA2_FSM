#pragma once
#include "CMenuScreen.h"
class CGraphics :
  public CMenuScreen
{
public:
  CGraphics();
  ~CGraphics();

  void onEnter();
  bool onUpdate(sf::RenderWindow& _window, sf::Event& _event);
  void onExit();
  void draw(sf::RenderWindow& _window);

  CButton_ btnBack;
};
