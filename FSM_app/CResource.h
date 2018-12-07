#pragma once
#include <string>
class CResource
{
public:
  CResource() = default;
  virtual ~CResource() = default;


  virtual bool loadFromFile(std::string pathName) = 0;
};

