#include "CAngelSE.h"

#include <stdio.h>



CAngelSE::CAngelSE() {}


CAngelSE::~CAngelSE() {}


void CAngelSE::MessageCallback(const asSMessageInfo *msg, void *param) {
  const char *type = "ERR ";
  if (msg->type == asMSGTYPE_WARNING)
    type = "WARN";
  else if (msg->type == asMSGTYPE_INFORMATION)
    type = "INFO";
  printf("%s (%d, %d) : %s : %s\n", msg->section, msg->row, msg->col, type, msg->message);
}