#include "CHelp.h"



CHelp::CHelp() {}


CHelp::~CHelp() {}

void CHelp::onEnter() {

}

bool CHelp::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  draw(_window);
  if (btnBack.checkClicked(_event) || _event.KeyPressed == sf::Keyboard::Escape)
    return false;
  return true;
}

void CHelp::onExit() {

}

void CHelp::draw(sf::RenderWindow& _window) {
  
}
