#ifndef _CDATA_H_
#define _CDATA_H_

#include <iostream>
#include <string>

using namespace std;

class CData {
private:
  int number;
  string comment;

public:
  void init();
  void setNumber(int n) { number = n; }
  void setComment(string str) { comment = str; }
  int getNumber() { return number; }
  string getComment() { return comment; }
};

#endif //_CDATA_H_
