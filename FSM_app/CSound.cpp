#include "CSound.h"


CSound::CSound() {
  btn_texture.loadFromFile("gold_metal_sign.png");
  if (!m_fnt.loadFromFile("Barbarian.ttf")) {
    printf("~ Could not load font from file ~");
  }

  m_soundNotButton.btnBG.setSize(sf::Vector2f(300.0f, 80.0f));
  m_soundNotButton.setPos(sf::Vector2f(450.0f, 50.0f));
  m_soundNotButton.btnBG.setTexture(&btn_texture);
  m_soundNotButton.btn_text.setOutlineColor(sf::Color::Black);
  m_soundNotButton.setTxtColor(sf::Color::Black);
  m_soundNotButton.btn_text.setString("   Sound>");
  m_soundNotButton.btn_text.setFont(m_fnt);
  m_soundNotButton.btn_text.setCharacterSize(50);

  btnBack.btnBG.setSize(sf::Vector2f(280.0f, 80.0f));
  btnBack.setPos(sf::Vector2f(450.0f, 700.0f));
  btnBack.btnBG.setTexture(&btn_texture);
  btnBack.btn_text.setOutlineColor(sf::Color::Black);
  btnBack.setTxtColor(sf::Color::Black);
  btnBack.btn_text.setString("Back>");
  btnBack.btn_text.setFont(m_fnt);
  btnBack.btn_text.setCharacterSize(50);
}


CSound::~CSound() {}

CSound::CSound(CMenuApp * _app) {
  mp_app = _app;
}

void CSound::onEnter() {
  
}

bool CSound::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  if (btnBack.checkClicked(_event))
    return false;
  if (_event.KeyPressed == sf::Keyboard::Escape)
    return false;
  _event.key.code = sf::Keyboard::Unknown;
  draw(_window);
  return true;
}

void CSound::onExit() {

}

void CSound::draw(sf::RenderWindow & _window) {
  m_soundNotButton.draw(_window);
  btnBack.draw(_window);
}
