#include "CMainMenu.h"
#include "CMenuApp.h"



CMainMenu::CMainMenu() {}


CMainMenu::~CMainMenu() {}

CMainMenu::CMainMenu(CMenuApp * _app) {
  mp_app = _app;
  
}

void CMainMenu::onEnter() {
  sf::Texture txt;
  txt.loadFromFile("gold_metal_sign.png");
  sf::Font fnt;
  fnt.loadFromFile("Arial.ttf");

  btnPlay.setPos(sf::Vector2f(550.0f, 500.0f), sf::Vector2f(650.0f, 550.0f));
  btnPlay.btnBG.setTexture(&txt);
  btnPlay.setBGColor(sf::Color::White);
  btnPlay.btn_text.setOutlineColor(sf::Color::Black);
  btnPlay.setTxtColor(sf::Color::White);
  btnPlay.btn_text.setString("Play>");
  btnPlay.btn_text.setFont(fnt);

  btnOptions.setPos(sf::Vector2f(550.0f, 500.0f), sf::Vector2f(650.0f, 550.0f));
  btnOptions.btnBG.setTexture(&txt);
  //btnOptions.setBGColor(sf::Color::White);
  btnOptions.btn_text.setOutlineColor(sf::Color::Black);
  btnOptions.setTxtColor(sf::Color::White);
  btnOptions.btn_text.setString("Options>");
  btnOptions.btn_text.setFont(fnt);

  btnExit.setPos(sf::Vector2f(550.0f, 500.0f), sf::Vector2f(650.0f, 550.0f));
  btnExit.btnBG.setTexture(&txt);
  //btnExit.setBGColor(sf::Color::White);
  btnExit.btn_text.setOutlineColor(sf::Color::Black);
  btnExit.setTxtColor(sf::Color::White);
  btnExit.btn_text.setString("Exit>");
  btnExit.btn_text.setFont(fnt);

}

bool CMainMenu::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  
  if (btnPlay.checkClicked(_event)) {
    mp_app->setState(&mp_app->playing);
    return true;
  }
  else if (btnOptions.checkClicked(_event)) {
    mp_app->pushState(&mp_app->options);
    return true;
  }
  else if (btnExit.checkClicked(_event)) {
    _window.close();
  }
  draw(_window);
  return true;
}

void CMainMenu::onExit() {

}

void CMainMenu::draw(sf::RenderWindow & _window) {
  btnPlay.draw(_window);
  btnOptions.draw(_window);
  btnExit.draw(_window);

  //sf::RectangleShape obj(sf::Vector2f(500, 500));
  //_window.draw(obj);
}
