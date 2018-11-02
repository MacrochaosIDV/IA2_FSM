#pragma once
#include "CMenuScreen.h"
class CGameOver :
  public CMenuScreen
{
public:
  CGameOver();
  ~CGameOver();
  CGameOver(CMenuApp* _app);

  void onEnter();
  bool onUpdate(sf::RenderWindow& _window, sf::Event& _event);
  void onExit();
  void draw(sf::RenderWindow& _window);

  CButton_ btnContinue;
  CButton_ btnMainMenu;
  CButton_ btnExit;
  float timer;
};

