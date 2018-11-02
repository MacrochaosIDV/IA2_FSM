#include "COptions.h"
#include "CMenuApp.h"



COptions::COptions() {}


COptions::~COptions() {}

COptions::COptions(CMenuApp * _app) {
  mp_app = _app;
}

void COptions::onEnter() {

}

bool COptions::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  draw(_window);
  if (btnGraphics.checkClicked(_event)) {
    mp_app->pushState(&mp_app->optGraphics);
  }
  else if (btnSound.checkClicked(_event)) {
    mp_app->pushState(&mp_app->optSound);
  }
  else if (btnGameplay.checkClicked(_event)) {
    mp_app->pushState(&mp_app->optGamePlay);
  }
  else if (btnBack.checkClicked(_event) || _event.KeyPressed == sf::Keyboard::Escape) {
    return false;
  }
  return true;
}

void COptions::onExit() {

}

void COptions::draw(sf::RenderWindow& _window) {

}
