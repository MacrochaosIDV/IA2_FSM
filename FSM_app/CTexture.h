#pragma once
#include "CResource.h"
#include "SFML_Include.h"

class CTexture : public CResource
{
public:
  CTexture();
  ~CTexture();

  bool loadFromFile(std::string pathName);

  sf::Texture m_tex;
};

