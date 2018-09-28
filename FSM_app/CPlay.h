#pragma once
#include "CMenuScreen.h"
class CPlay :
  public CMenuScreen
{
public:
  CPlay();
  ~CPlay();

  void onEnter();
  bool onUpdate(sf::RenderWindow& _window, sf::Event& _event);
  void onExit();
  void draw(sf::RenderWindow& _window);
};

