#include "CLogo.h"
#include "CMenuApp.h"

#include <iostream>




CLogo::CLogo(CMenuApp * _app) {
  mp_app = _app;
  
}

void CLogo::onEnter() {
  txtr.loadFromFile("logoimg.png");
  rctshLogo.setTexture(&txtr);
  rctshLogo.setPosition(0.0f, 0.0f);
  rctshLogo.setSize(sf::Vector2<float>{1200.0f, 800.0f});
  timer = 9.0f;
}

bool CLogo::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  draw(_window);
  if (timer >= 0) {
    timer -= 0.016;
    if (timer <= 0)
      std::cout << "timer end\n";
    return true;
  }
  else if (_event.KeyPressed == sf::Keyboard::Escape) {
    mp_app->setState(&mp_app->mainMenu);
    return true;
  }
  else {
    mp_app->setState(&mp_app->mainMenu);
    return true;
  }
  _event.key.code = sf::Keyboard::Unknown;
  return true;
}

void CLogo::onExit() {

}

void CLogo::draw(sf::RenderWindow & _window) {
  _window.draw(rctshLogo);
}
