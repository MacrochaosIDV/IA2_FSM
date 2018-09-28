#include "CGraphics.h"



CGraphics::CGraphics() {}


CGraphics::~CGraphics() {}

void CGraphics::onEnter() {

}

bool CGraphics::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  draw(_window);
  if (btnBack.checkClicked(_event) || _event.KeyPressed == sf::Keyboard::Escape)
    return false;
  return true;
}

void CGraphics::onExit() {

}

void CGraphics::draw(sf::RenderWindow& _window) {
  
}
