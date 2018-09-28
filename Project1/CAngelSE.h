#pragma once
#include <angelscript.h>
class CAngelSE : public asIScriptEngine
{
public:
  CAngelSE();
  ~CAngelSE();

  void MessageCallback(const asSMessageInfo *msg, void *param);
};

