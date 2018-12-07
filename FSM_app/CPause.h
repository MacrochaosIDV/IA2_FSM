#pragma once
#include "CMenuScreen.h"
class CPause :
  public CMenuScreen
{
public:
  CPause();
  ~CPause();
  CPause(CMenuApp * _app);

  void onEnter();
  bool onUpdate(sf::RenderWindow& _window, sf::Event& _event);
  void onExit();
  void draw(sf::RenderWindow& _window);

  CButton_ m_notBtnPause;
  CButton_ m_btnBack;
  CButton_ m_btnMainMenu;
  CButton_ m_btnOptions;
};

