#pragma once
#include "CMenuScreen.h"
class CLogo :
  public CMenuScreen
{
public:
  CLogo() = default;
  ~CLogo() = default;
  CLogo(CMenuApp * _app);

  void onEnter();
  bool onUpdate(sf::RenderWindow& _window, sf::Event& _event);
  void onExit();
  void draw(sf::RenderWindow& _window);


  float timer;
  sf::Image logoImg;
  sf::Texture txtr;
  sf::RectangleShape rctshLogo;
  CButton_ btnLogo;
};

