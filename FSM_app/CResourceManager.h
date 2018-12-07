#pragma once
#include <map>
#include "CResource.h"

using std::string;
using std::map;

class CResourceManager
{
public:
  CResourceManager() = default;
  ~CResourceManager() = default;

  void loadResource(string pathName);
  void garbageCollect();
  void releaseResources(int res_id);
  int hashStringInt(string pathName);

  map<int, CResource*> m_mapResource;
};

