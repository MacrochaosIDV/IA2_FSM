#pragma once
#include "CMenuScreen.h"
class CSound :
  public CMenuScreen
{
public:
  CSound();
  ~CSound();
  CSound(CMenuApp * _app);

  void onEnter();
  bool onUpdate(sf::RenderWindow& _window, sf::Event& _event);
  void onExit();
  void draw(sf::RenderWindow& _window);
  sf::Text soundOptions;
  CButton_ btnBack;
};

