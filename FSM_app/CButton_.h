#pragma once

#include "SFML_include.h"

class CButton_
{
public:
  CButton_() = default;
  ~CButton_() = default;

  //CButton_(const sf::Vector2f& _minP, const sf::Vector2f& _maxP, const std::string _btnTxt);

  void draw(sf::RenderWindow& _window);
  void setPos(const sf::Vector2f& _minP, const sf::Vector2f& _maxP);
  void setBGColor(sf::Color color);
  void setTxtColor(sf::Color color);
  bool checkClicked(sf::Event& _event);

  sf::Text btn_text;
  sf::Vector2f m_minP;
  sf::Vector2f m_maxP;
  sf::RectangleShape btnBG;
};

