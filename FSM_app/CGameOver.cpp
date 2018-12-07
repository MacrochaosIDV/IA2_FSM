#include "CGameOver.h"
#include "CMenuApp.h"
#include <string>
#include <sstream>



CGameOver::CGameOver() {
  btn_texture.loadFromFile("gold_metal_sign.png");

  if (!m_fnt.loadFromFile("Barbarian.ttf")) {
    printf("~ Could not load font from file ~");
  }
  if (!m_arial.loadFromFile("arial.ttf")) {
    printf("~ Could not load font from file ~");
  }

  m_countDownTimer.setPosition(sf::Vector2f(730.0f, 400.0f));
  m_countDownTimer.setString("? : ");
  m_countDownTimer.setFont(m_arial);
  m_countDownTimer.setCharacterSize(50);


  m_btnContinue.btnBG.setSize(sf::Vector2f(280.0f, 80.0f));
  m_btnContinue.setPos(sf::Vector2f(450.0f, 400.0f));
  m_btnContinue.btnBG.setTexture(&btn_texture);
  m_btnContinue.btn_text.setOutlineColor(sf::Color::Black);
  m_btnContinue.setTxtColor(sf::Color::Black);
  m_btnContinue.btn_text.setString("Continue>");
  m_btnContinue.btn_text.setFont(m_fnt);
  m_btnContinue.btn_text.setCharacterSize(50);

  /*m_btnMainMenu.btnBG.setSize(sf::Vector2f(280.0f, 80.0f));
  m_btnMainMenu.setPos(sf::Vector2f(450.0f, 500.0f));
  m_btnMainMenu.btnBG.setTexture(&btn_texture);
  m_btnMainMenu.btn_text.setOutlineColor(sf::Color::Black);
  m_btnMainMenu.setTxtColor(sf::Color::Black);
  m_btnMainMenu.btn_text.setString("Mainmenu>");
  m_btnMainMenu.btn_text.setFont(m_fnt);
  m_btnMainMenu.btn_text.setCharacterSize(50);*/

  m_btnExit.btnBG.setSize(sf::Vector2f(280.0f, 80.0f));
  m_btnExit.setPos(sf::Vector2f(450.0f, 600.0f));
  m_btnExit.btnBG.setTexture(&btn_texture);
  m_btnExit.btn_text.setOutlineColor(sf::Color::Black);
  m_btnExit.setTxtColor(sf::Color::Black);
  m_btnExit.btn_text.setString("Exit>");
  m_btnExit.btn_text.setFont(m_fnt);
  m_btnExit.btn_text.setCharacterSize(50);
}


CGameOver::~CGameOver() {}

CGameOver::CGameOver(CMenuApp * _app) {
  mp_app = _app;
}

void CGameOver::onEnter() {
  m_timer = 150.0f;
}

bool CGameOver::onUpdate(sf::RenderWindow& _window, sf::Event& _event) {
  
  if (m_timer > 0)
    m_timer -= 0.016f;
  else
    mp_app->setState(&mp_app->mainMenu);

  std::stringstream strStream;

  strStream << " ? : " << static_cast<int>(m_timer);
  std::string str = strStream.str();;
  m_countDownTimer.setString(str);

  if (m_btnContinue.checkClicked(_event) || sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
    mp_app->setState(&mp_app->playing);
  else if (m_btnMainMenu.checkClicked(_event) || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
    mp_app->setState(&mp_app->mainMenu);
  else if (m_btnExit.checkClicked(_event))
    _window.close();

  _event.key.code = sf::Keyboard::Unknown;
  draw(_window);
  return true;
}

void CGameOver::onExit() {

}

void CGameOver::draw(sf::RenderWindow& _window) {
  m_btnContinue.draw(_window);
  m_btnExit.draw(_window);
  //m_btnMainMenu.draw(_window);
  _window.draw(m_countDownTimer);
}
