#include "CButton_.h"
#include "SFML_include.h"
//CButton_::CButton_(const sf::Vector2f & _minP, const sf::Vector2f& _maxP, const std::string _btnTxt) {
//  this->setPosition(_minP +(_maxP - _minP));
//  this->setString(_btnTxt);
//  this->setFillColor(sf::Color::Black);
//
//  btnBG.setSize(_maxP - _minP);
//  btnBG.setPosition(_minP + (_maxP - _minP));
//  btnBG.setFillColor(sf::Color::Color(200, 200, 200, 255));
//}


void CButton_::draw(sf::RenderWindow& _window) {
  _window.draw(btnBG);
  _window.draw(btn_text);
}

void CButton_::setPos(const sf::Vector2f & _minP, const sf::Vector2f & _maxP) {
  btn_text.setPosition(_minP + (_maxP - _minP));
  btnBG.setSize(_maxP - _minP);
  btnBG.setPosition(_minP + (_maxP - _minP));
}

void CButton_::setPos(const sf::Vector2f & _newPos) {
  btn_text.setPosition(_newPos);
  btnBG.setPosition(_newPos);
}

void CButton_::setBGColor(sf::Color color) {
  btnBG.setFillColor(color);
}

void CButton_::setTxtColor(sf::Color color) {
  btn_text.setFillColor(color);
}

bool CButton_::checkClicked(sf::Event& _event) {
  /*if (_event.type == sf::Event::MouseLeft) {
    if (_event.mouseButton.x >= m_minP.x && _event.mouseButton.y >= m_minP.y &&
        _event.mouseButton.x <= m_maxP.x && _event.mouseButton.y <= m_maxP.y)
      return true;
  }
  return false;*/
  if (btnBG.getGlobalBounds().contains(sf::Vector2f(_event.mouseButton.x, _event.mouseButton.y)))
      return true;
  return false;
}
