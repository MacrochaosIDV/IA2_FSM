#pragma once
#include "CMenuScreen.h"
class COptions :
  public CMenuScreen
{
public:
  COptions();
  ~COptions();

  void onEnter();
  bool onUpdate(sf::RenderWindow& _window, sf::Event& _event);
  void onExit();
  void draw(sf::RenderWindow& _window);

  CButton_ btnGraphics;
  CButton_ btnSound;
  CButton_ btnGameplay;
  CButton_ btnBack;
};

