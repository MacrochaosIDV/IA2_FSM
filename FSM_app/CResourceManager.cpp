#include "CResourceManager.h"
#include <cmath>

void CResourceManager::loadResource(string pathName) {

  m_mapResource.insert(std::make_pair(hashStringInt(pathName), new CTexture()/*To do: */));
}

void CResourceManager::garbageCollect() {}

void CResourceManager::releaseResources(int res_id) {

}

int CResourceManager::hashStringInt(string pathName) {
  int reshash = 0;
  for (int i = 0; i < pathName.size(); ++i) {
    reshash += std::pow(i + 1, (pathName[i] + 1) * i);
  }
  return reshash + pathName.size();
}
