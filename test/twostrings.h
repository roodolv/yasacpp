#ifndef _TWOSTRINGS_H_
#define _TWOSTRINGS_H_

#include <iostream>
#include <string>

using namespace std;

class TwoStrings {
private:
  string m_string1;
  string m_string2;

public:
  void setString1(string s) { m_string1 = s; }
  void setString2(string s) { m_string2 = s; }
  string getString1() { return m_string1; }
  string getString2() { return m_string2; }

  string getConnectedString() { return m_string1 + m_string2; }
  int getConnectedLength();
};

#endif //_TWOSTRINGS_H_
