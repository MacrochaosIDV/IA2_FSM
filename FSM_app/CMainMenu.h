#pragma once
#include "CMenuScreen.h"
class CMainMenu :
  public CMenuScreen
{
public:
  CMainMenu();
  ~CMainMenu();
  CMainMenu(CMenuApp * _app);

  void onEnter();
  bool onUpdate(sf::RenderWindow& _window, sf::Event& _event);
  void onExit();
  void draw(sf::RenderWindow& _window);

  CButton_ btnPlay;
  CButton_ btnOptions;
  CButton_ btnExit;
};

