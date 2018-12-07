#include "CHelp.h"



CHelp::CHelp() {
  btn_texture.loadFromFile("gold_metal_sign.png");
  if (!m_fnt.loadFromFile("Barbarian.ttf")) {
    printf("~ Could not load font from file ~");
  }

  m_notBtnBack.btnBG.setSize(sf::Vector2f(300.0f, 80.0f));
  m_notBtnBack.setPos(sf::Vector2f(450.0f, 50.0f));
  m_notBtnBack.btnBG.setTexture(&btn_texture);
  m_notBtnBack.btn_text.setOutlineColor(sf::Color::Black);
  m_notBtnBack.setTxtColor(sf::Color::Black);
  m_notBtnBack.btn_text.setString("   Help>");
  m_notBtnBack.btn_text.setFont(m_fnt);
  m_notBtnBack.btn_text.setCharacterSize(50);

  m_btnBack.btnBG.setSize(sf::Vector2f(300.0f, 80.0f));
  m_btnBack.setPos(sf::Vector2f(450.0f, 700.0f));
  m_btnBack.btnBG.setTexture(&btn_texture);
  m_btnBack.btn_text.setOutlineColor(sf::Color::Black);
  m_btnBack.setTxtColor(sf::Color::Black);
  m_btnBack.btn_text.setString("   Back>");
  m_btnBack.btn_text.setFont(m_fnt);
  m_btnBack.btn_text.setCharacterSize(50);
}


CHelp::~CHelp() {}

CHelp::CHelp(CMenuApp * _app) {
  mp_app = _app;
}

void CHelp::onEnter() {

}

bool CHelp::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  
  if (m_btnBack.checkClicked(_event) || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
    return false;

  _event.key.code = sf::Keyboard::Unknown;
  draw(_window);
  return true;
}

void CHelp::onExit() {

}

void CHelp::draw(sf::RenderWindow& _window) {
  m_btnBack.draw(_window);
  m_notBtnBack.draw(_window);
}
