#include "CMainMenu.h"
#include "CMenuApp.h"



CMainMenu::CMainMenu() {
  btn_texture.loadFromFile("gold_metal_sign.png");
  if (!m_fnt.loadFromFile("Barbarian.ttf")) {
    printf("~ Could not load font from file ~");
  }
  

  btnPlay.btnBG.setSize(sf::Vector2f(280.0f, 80.0f));
  btnPlay.setPos(sf::Vector2f(450.0f, 400.0f));
  btnPlay.btnBG.setTexture(&btn_texture);
  btnPlay.btn_text.setOutlineColor(sf::Color::Black);
  btnPlay.setTxtColor(sf::Color::Black);
  btnPlay.btn_text.setString("Play>");
  btnPlay.btn_text.setFont(m_fnt);
  btnPlay.btn_text.setCharacterSize(50);

  btnOptions.btnBG.setSize(sf::Vector2f(280.0f, 80.0f));
  btnOptions.setPos(sf::Vector2f(450.0f, 500.0f));
  btnOptions.btnBG.setTexture(&btn_texture);
  btnOptions.btn_text.setOutlineColor(sf::Color::Black);
  btnOptions.setTxtColor(sf::Color::Black);
  btnOptions.btn_text.setString("Options>");
  btnOptions.btn_text.setFont(m_fnt);
  btnOptions.btn_text.setCharacterSize(50);

  btnExit.btnBG.setSize(sf::Vector2f(280.0f, 80.0f));
  btnExit.setPos(sf::Vector2f(450.0f, 600.0f));
  btnExit.btnBG.setTexture(&btn_texture);
  btnExit.btn_text.setOutlineColor(sf::Color::Black);
  btnExit.setTxtColor(sf::Color::Black);
  btnExit.btn_text.setString("Exit>");
  btnExit.btn_text.setFont(m_fnt);
  btnExit.btn_text.setCharacterSize(50);
}


CMainMenu::~CMainMenu() {}

CMainMenu::CMainMenu(CMenuApp * _app) {
  mp_app = _app;
  
}

void CMainMenu::onEnter() {
  

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
  _event.key.code = sf::Keyboard::Unknown;
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
