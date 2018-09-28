#include "CButton_.h"

CButton_::CButton_(const sf::Vector2f & _minP, const sf::Vector2f& _maxP, const std::string _btnTxt) {
  (*this).setPosition(_minP +(_maxP - _minP));
  (*this).setString(_btnTxt);
  (*this).setFillColor(sf::Color::Black);
  btnBG.setSize(_maxP - _minP);
  btnBG.setPosition(_minP + (_maxP - _minP));
  btnBG.setFillColor(sf::Color::Color(200, 200, 200, 255));
}


void CButton_::setPos(const sf::Vector2f & _minP, const sf::Vector2f & _maxP) {
  (*this).setPosition(_minP + (_maxP - _minP));
  btnBG.setSize(_maxP - _minP);
  btnBG.setPosition(_minP + (_maxP - _minP));
}

void CButton_::setBGColor(sf::Color color) {
  btnBG.setFillColor(color);
}

void CButton_::setTxtColor(sf::Color color) {
  (*this).setFillColor(color);
}

bool CButton_::checkClicked(sf::Event& _event) {
  if (_event.mouseButton.x >= m_minP.x && _event.mouseButton.y >= m_minP.y &&
      _event.mouseButton.x <= m_maxP.x && _event.mouseButton.y <= m_maxP.y)
    return true;
  return false;
}
