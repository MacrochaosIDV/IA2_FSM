#include "CLogo.h"
#include "CMenuApp.h"




CLogo::CLogo() {
  //logoImg.loadFromFile("logoimg.png");
  //txtr.update(logoImg);
  //txtr.setSmooth(true);
  //txtr.create(300U, 300U);
  //txtr.loadFromFile("logoimg.png");
  //rctshLogo.setTexture(&txtr);
  //rctshLogo.setSize(sf::Vector2f(300.0f, 300.0f));
  //rctshLogo.setPosition(sf::Vector2f(0.0f, 0.0f));
  //btnLogo.setString("LOGO");
  //btnLogo.setPosition(sf::Vector2f(300.0f, 300.0f));
}

void CLogo::onEnter() {
  timer = 3.0f;
}

bool CLogo::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  draw(_window);
  if (timer >= 0) {
    timer -= 0.016;
    return true;
  }
  else if (_event.KeyPressed == sf::Keyboard::Escape)
    mp_app->setState(&mp_app->mainMenu);
  return true;
}

void CLogo::onExit() {

}

void CLogo::draw(sf::RenderWindow & _window) {
  _window.draw(rctshLogo);
}
