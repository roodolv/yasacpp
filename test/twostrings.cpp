#include <iostream>
#include <string>
#include "twostrings.h"

using namespace std;

int TwoStrings::getConnectedLength() {
  string a = m_string1 + m_string2;
  return a.length();
}
