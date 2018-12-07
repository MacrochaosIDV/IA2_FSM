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

  
  CButton_ m_btnContinue;
  CButton_ m_btnMainMenu;
  CButton_ m_btnExit;
  sf::Text m_countDownTimer;
  sf::Font m_arial;
  float m_timer;
};

