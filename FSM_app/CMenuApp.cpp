#include "CMenuApp.h"
#include <iostream>



void CMenuApp::setState(CMenuScreen * pNewScreen) {
  mpCurrScreen->onExit();
  mpSTKCurrScreen.pop();
  mpCurrScreen = pNewScreen;
  mpSTKCurrScreen.push(mpCurrScreen);
  mpCurrScreen->onEnter();
}

void CMenuApp::pushState(CMenuScreen * pNewScreen) {
  mpCurrScreen = pNewScreen;
  mpSTKCurrScreen.push(mpCurrScreen);
  mpCurrScreen->onEnter();
}

void CMenuApp::popState() {
  mpCurrScreen->onExit();
  mpSTKCurrScreen.pop();
}

void CMenuApp::init() {
  bStateStays = true;
  gameOver.setApp(this);
  optGamePlay.setApp(this);
  optGraphics.setApp(this);
  help.setApp(this);
  logo.setApp(this);
  mainMenu.setApp(this);
  options.setApp(this);
  pause.setApp(this);
  playing.setApp(this);
  optSound.setApp(this);
  pushState(&logo);
}

void CMenuApp::update(sf::RenderWindow& _window, sf::Event& _event) {
  if (!bStateStays) {
    popState();
  }

  bStateStays =  mpSTKCurrScreen.top()->onUpdate(_window, _event);
}

void CMenuApp::emptyStack() {
  std::cout << "Emptying state stack\n";
  while (!mpSTKCurrScreen.empty())
    popState();
}
