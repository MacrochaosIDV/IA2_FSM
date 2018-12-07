#include "CPlay.h"
#include "CMenuApp.h"



CPlay::CPlay() {}


CPlay::~CPlay() {}

CPlay::CPlay(CMenuApp * _app) {
  mp_app = _app;
}

void CPlay::onEnter() {
  std::cout << "Entering play state\n";
}

bool CPlay::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
    mp_app->pushState(&mp_app->pause);
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace)) {
    mp_app->setState(&mp_app->gameOver);
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::H)) {
    mp_app->pushState(&mp_app->help);
  }
  _event.key.code = sf::Keyboard::Unknown;
  draw(_window);
  return true;
}

void CPlay::onExit() {
  std::cout << "Exiting play state\n";
}

void CPlay::draw(sf::RenderWindow & _window) {

}
