#include "CGamePlay.h"



CGamePlay::CGamePlay() {}


CGamePlay::~CGamePlay() {}

void CGamePlay::onEnter() {

}

bool CGamePlay::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  draw(_window);
  if (btnBack.checkClicked(_event) || _event.KeyPressed == sf::Keyboard::Escape)
    return false;
  return false;
}

void CGamePlay::onExit() {

}

void CGamePlay::draw(sf::RenderWindow& _window) {
  
}
