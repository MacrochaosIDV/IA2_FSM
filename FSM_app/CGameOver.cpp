#include "CGameOver.h"
#include "CMenuApp.h"



CGameOver::CGameOver() {}


CGameOver::~CGameOver() {}

CGameOver::CGameOver(CMenuApp * _app) {
  mp_app = _app;
}

void CGameOver::onEnter() {
  timer = 15.0f;
}

bool CGameOver::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  draw(_window);
  if (timer > 0)
    timer -= 0.016f;
  else
    mp_app->setState(&mp_app->mainMenu);

  if (btnContinue.checkClicked(_event) || _event.KeyPressed == sf::Keyboard::Enter)
    mp_app->setState(&mp_app->playing);
  else if (btnMainMenu.checkClicked(_event) || _event.KeyPressed == sf::Keyboard::Escape)
    mp_app->setState(&mp_app->mainMenu);
  else if (btnExit.checkClicked(_event))
    _window.close();
  return true;
}

void CGameOver::onExit() {

}

void CGameOver::draw(sf::RenderWindow& _window) {
  btnContinue.draw(_window);
  btnExit.draw(_window);
  btnMainMenu.draw(_window);
}
