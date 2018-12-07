#include "COptions.h"
#include "CMenuApp.h"



COptions::COptions() {
  btn_texture.loadFromFile("gold_metal_sign.png");
  if (!m_fnt.loadFromFile("Barbarian.ttf")) {
    printf("~ Could not load font from file ~");
  }
  
  btnGraphics.btnBG.setSize(sf::Vector2f(300.0f, 80.0f));
  btnGraphics.setPos(sf::Vector2f(150.0f, 200.0f));
  btnGraphics.btnBG.setTexture(&btn_texture);
  btnGraphics.btn_text.setOutlineColor(sf::Color::Black);
  btnGraphics.setTxtColor(sf::Color::Black);
  btnGraphics.btn_text.setString("Graphics>");
  btnGraphics.btn_text.setFont(m_fnt);
  btnGraphics.btn_text.setCharacterSize(50);

  btnSound.btnBG.setSize(sf::Vector2f(300.0f, 80.0f));
  btnSound.setPos(sf::Vector2f(150.0f, 300.0f));
  btnSound.btnBG.setTexture(&btn_texture);
  btnSound.btn_text.setOutlineColor(sf::Color::Black);
  btnSound.setTxtColor(sf::Color::Black);
  btnSound.btn_text.setString("Sound>");
  btnSound.btn_text.setFont(m_fnt);
  btnSound.btn_text.setCharacterSize(50);

  btnGameplay.btnBG.setSize(sf::Vector2f(300.0f, 80.0f));
  btnGameplay.setPos(sf::Vector2f(150.0f, 400.0f));
  btnGameplay.btnBG.setTexture(&btn_texture);
  btnGameplay.btn_text.setOutlineColor(sf::Color::Black);
  btnGameplay.setTxtColor(sf::Color::Black);
  btnGameplay.btn_text.setString("Gameplay>");
  btnGameplay.btn_text.setFont(m_fnt);
  btnGameplay.btn_text.setCharacterSize(50);

  btnBack.btnBG.setSize(sf::Vector2f(300.0f, 80.0f));
  btnBack.setPos(sf::Vector2f(150.0f, 500.0f));
  btnBack.btnBG.setTexture(&btn_texture);
  btnBack.btn_text.setOutlineColor(sf::Color::Black);
  btnBack.setTxtColor(sf::Color::Black);
  btnBack.btn_text.setString("Back>");
  btnBack.btn_text.setFont(m_fnt);
  btnBack.btn_text.setCharacterSize(50);

  m_optionsNotBtn.btnBG.setSize(sf::Vector2f(280.0f, 80.0f));
  m_optionsNotBtn.setPos(sf::Vector2f(450.0f, 50.0f));
  m_optionsNotBtn.btnBG.setTexture(&btn_texture);
  m_optionsNotBtn.btn_text.setOutlineColor(sf::Color::Black);
  m_optionsNotBtn.setTxtColor(sf::Color::Black);
  m_optionsNotBtn.btn_text.setString("Options>");
  m_optionsNotBtn.btn_text.setFont(m_fnt);
  m_optionsNotBtn.btn_text.setCharacterSize(50);
}


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
  _event.key.code = sf::Keyboard::Unknown;
  return true;
}

void COptions::onExit() {

}

void COptions::draw(sf::RenderWindow& _window) {
  btnGraphics.draw(_window);
  btnGameplay.draw(_window);
  btnSound.draw(_window);
  btnBack.draw(_window);
  m_optionsNotBtn.draw(_window);
}
