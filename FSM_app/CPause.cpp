#include "CPause.h"
#include "CMenuApp.h"



CPause::CPause() {
  btn_texture.loadFromFile("gold_metal_sign.png");
  if (!m_fnt.loadFromFile("Barbarian.ttf")) {
    printf("~ Could not load font from file ~");
  }

  m_notBtnPause.btnBG.setSize(sf::Vector2f(280.0f, 80.0f));
  m_notBtnPause.setPos(sf::Vector2f(450.0f, 50.0f));
  m_notBtnPause.btnBG.setTexture(&btn_texture);
  m_notBtnPause.btn_text.setOutlineColor(sf::Color::Black);
  m_notBtnPause.setTxtColor(sf::Color::Black);
  m_notBtnPause.btn_text.setString("Pause>");
  m_notBtnPause.btn_text.setFont(m_fnt);
  m_notBtnPause.btn_text.setCharacterSize(50);

  m_btnOptions.btnBG.setSize(sf::Vector2f(300.0f, 80.0f));
  m_btnOptions.setPos(sf::Vector2f(750.0f, 200.0f));
  m_btnOptions.btnBG.setTexture(&btn_texture);
  m_btnOptions.btn_text.setOutlineColor(sf::Color::Black);
  m_btnOptions.setTxtColor(sf::Color::Black);
  m_btnOptions.btn_text.setString("Options>");
  m_btnOptions.btn_text.setFont(m_fnt);
  m_btnOptions.btn_text.setCharacterSize(50);

  m_btnMainMenu.btnBG.setSize(sf::Vector2f(300.0f, 80.0f));
  m_btnMainMenu.setPos(sf::Vector2f(750.0f, 300.0f));
  m_btnMainMenu.btnBG.setTexture(&btn_texture);
  m_btnMainMenu.btn_text.setOutlineColor(sf::Color::Black);
  m_btnMainMenu.setTxtColor(sf::Color::Black);
  m_btnMainMenu.btn_text.setString("Main-menu>");
  m_btnMainMenu.btn_text.setFont(m_fnt);
  m_btnMainMenu.btn_text.setCharacterSize(50);

  m_btnBack.btnBG.setSize(sf::Vector2f(300.0f, 80.0f));
  m_btnBack.setPos(sf::Vector2f(750.0f, 500.0f));
  m_btnBack.btnBG.setTexture(&btn_texture);
  m_btnBack.btn_text.setOutlineColor(sf::Color::Black);
  m_btnBack.setTxtColor(sf::Color::Black);
  m_btnBack.btn_text.setString("Back>");
  m_btnBack.btn_text.setFont(m_fnt);
  m_btnBack.btn_text.setCharacterSize(50);

}


CPause::~CPause() {}

CPause::CPause(CMenuApp * _app) {
  mp_app = _app;
}

void CPause::onEnter() {
  std::cout << "Entering pause state\n";

}

bool CPause::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  draw(_window);
  if (m_btnBack.checkClicked(_event) || _event.KeyPressed == sf::Keyboard::Escape)
    return false;
  else if (m_btnOptions.checkClicked(_event) || _event.KeyPressed == sf::Keyboard::O)
    mp_app->pushState(&mp_app->options);
  else if (m_btnMainMenu.checkClicked(_event) || _event.KeyPressed == sf::Keyboard::M) {
    mp_app->emptyStack();
    mp_app->pushState(&mp_app->mainMenu);
  }
  _event.key.code = sf::Keyboard::Unknown;
  return true;
}

void CPause::onExit() {
  std::cout << "Exiting pause state\n";

}

void CPause::draw(sf::RenderWindow & _window) {
  m_btnOptions.draw(_window);
  m_btnMainMenu.draw(_window);
  m_btnBack.draw(_window);
  m_notBtnPause.draw(_window);
}
