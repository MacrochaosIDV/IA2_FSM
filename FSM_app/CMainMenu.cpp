#include "CMainMenu.h"
#include "CMenuApp.h"



CMainMenu::CMainMenu() {}


CMainMenu::~CMainMenu() {}

void CMainMenu::onEnter() {

}

bool CMainMenu::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  draw(_window);
  if (btnPlay.checkClicked(_event)) {
    mp_app->setState(&mp_app->playing);
  }
  else if (btnOptions.checkClicked(_event)) {
    mp_app->pushState(&mp_app->options);
  }
  else if (btnExit.checkClicked(_event)) {
    _window.close();
  }
  return true;
}

void CMainMenu::onExit() {

}

void CMainMenu::draw(sf::RenderWindow & _window) {
  _window.draw(btnPlay);
  _window.draw(btnOptions);
  _window.draw(btnExit);
}
