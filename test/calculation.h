#ifndef _CALCULATION_H_
#define _CALCULATION_H_

#include <iostream>

using namespace std;

class Calculation {
private:
  int m_number1;
  int m_number2;

public:
  void setNumber1(int n) { m_number1 = n; }
  void setNumber2(int n) { m_number2 = n; }
  int getNumber1() { return m_number1; }
  int getNumber2() { return m_number2; }
  int add();
  int sub();
};

#endif //_CALCULATION_H_
