#include "CGamePlay.h"



CGamePlay::CGamePlay() {
  btn_texture.loadFromFile("gold_metal_sign.png");
  if (!m_fnt.loadFromFile("Barbarian.ttf")) {
    printf("~ Could not load font from file ~");
  }

  m_gameplayNotButton.btnBG.setSize(sf::Vector2f(300.0f, 80.0f));
  m_gameplayNotButton.setPos(sf::Vector2f(450.0f, 50.0f));
  m_gameplayNotButton.btnBG.setTexture(&btn_texture);
  m_gameplayNotButton.btn_text.setOutlineColor(sf::Color::Black);
  m_gameplayNotButton.setTxtColor(sf::Color::Black);
  m_gameplayNotButton.btn_text.setString("Gameplay>");
  m_gameplayNotButton.btn_text.setFont(m_fnt);
  m_gameplayNotButton.btn_text.setCharacterSize(50);

  btnBack.btnBG.setSize(sf::Vector2f(280.0f, 80.0f));
  btnBack.setPos(sf::Vector2f(450.0f, 700.0f));
  btnBack.btnBG.setTexture(&btn_texture);
  btnBack.btn_text.setOutlineColor(sf::Color::Black);
  btnBack.setTxtColor(sf::Color::Black);
  btnBack.btn_text.setString("Back>");
  btnBack.btn_text.setFont(m_fnt);
  btnBack.btn_text.setCharacterSize(50);
}


CGamePlay::~CGamePlay() {}

CGamePlay::CGamePlay(CMenuApp * _app) {
  mp_app = _app;
}

void CGamePlay::onEnter() {

}

bool CGamePlay::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  if (btnBack.checkClicked(_event))
    return false;
  if (_event.KeyPressed == sf::Keyboard::Escape)
    return false;
  _event.key.code = sf::Keyboard::Unknown;
  draw(_window);
  return true;
}

void CGamePlay::onExit() {

}

void CGamePlay::draw(sf::RenderWindow& _window) {
  m_gameplayNotButton.draw(_window);
  btnBack.draw(_window);
}
