#include "CMenuScreen.h"
#include "CMenuApp.h"


CMenuScreen::CMenuScreen() {}


CMenuScreen::~CMenuScreen() {}

CMenuScreen::CMenuScreen(CMenuApp * _app) {
  mp_app = _app;
}

void CMenuScreen::onEnter() {

}

bool CMenuScreen::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  return false;
}

void CMenuScreen::onExit() {

}

void CMenuScreen::setApp(CMenuApp* p_app) {
  mp_app = p_app;
}
