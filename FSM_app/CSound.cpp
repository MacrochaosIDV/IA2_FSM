#include "CSound.h"


CSound::CSound() {
  soundOptions.setString("Sound Options");
  soundOptions.setPosition(sf::Vector2f(300.f, 200.f));
  btnBack.setPos(sf::Vector2f(550.0f, 380.0f), sf::Vector2f(600.0f, 400.0f));
}


CSound::~CSound() {}

CSound::CSound(CMenuApp * _app) {
  mp_app = _app;
}

void CSound::onEnter() {
  
}

bool CSound::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  draw(_window);
  if(btnBack.checkClicked(_event) || _event.KeyPressed == sf::Keyboard::Escape)
    return false;
  return true;
}

void CSound::onExit() {

}

void CSound::draw(sf::RenderWindow & _window) {
  _window.draw(soundOptions);
}
