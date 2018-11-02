#include "CPlay.h"
#include "CMenuApp.h"



CPlay::CPlay() {}


CPlay::~CPlay() {}

CPlay::CPlay(CMenuApp * _app) {
  mp_app = _app;
}

void CPlay::onEnter() {

}

bool CPlay::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  draw(_window);
  if (_event.KeyPressed == sf::Keyboard::Escape) {
    mp_app->pushState(&mp_app->pause);
  }
  else if (_event.KeyPressed == sf::Keyboard::BackSpace) {
    mp_app->setState(&mp_app->gameOver);
  }
  else if (_event.KeyPressed == sf::Keyboard::H) {
    mp_app->pushState(&mp_app->help);
  }
  return true;
}

void CPlay::onExit() {

}

void CPlay::draw(sf::RenderWindow & _window) {

}
