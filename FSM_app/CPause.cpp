#include "CPause.h"
#include "CMenuApp.h"



CPause::CPause() {}


CPause::~CPause() {}

CPause::CPause(CMenuApp * _app) {
  mp_app = _app;
}

void CPause::onEnter() {

}

bool CPause::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  draw(_window);
  if (btnBack.checkClicked(_event) || _event.KeyPressed == sf::Keyboard::Escape)
    return false;
  else if (btnOptions.checkClicked(_event) || _event.KeyPressed == sf::Keyboard::O)
    mp_app->pushState(&mp_app->options);
  else if (btnMainMenu.checkClicked(_event) || _event.KeyPressed == sf::Keyboard::M) {
    mp_app->emptyStack();
    mp_app->pushState(&mp_app->mainMenu);
  }
  return true;
}

void CPause::onExit() {

}

void CPause::draw(sf::RenderWindow & _window) {

}
