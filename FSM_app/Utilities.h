#pragma once
#include "SFML_Include.h"

namespace std {
  template <> struct hash<string>
  {
    size_t operator()(const string & x) const {
      /* your code here, e.g. "return hash<int>()(x.value);" */
    }
  };
}
