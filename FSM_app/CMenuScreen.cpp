#include "CMenuScreen.h"
#include "CMenuApp.h"


CMenuScreen::CMenuScreen() {}


CMenuScreen::~CMenuScreen() {}

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
