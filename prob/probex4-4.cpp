#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> strArray;
  string str;

  /* メインループ */
  do {
    cout << "文字列を入力：";
    cin >> str;

    // 入力されていなければこの時点でbreak
    if (&str == NULL)
      break;
    // 入力があった場合は動的配列に格納
    else
      strArray.push_back(str);

  } while (&str != NULL);
  /* メインここまで */

  cout << endl;

  vector<string> maxArray;
  vector<string> minArray;
  int strMax = INT_MIN;
  int strMin = INT_MAX;

  // 配列中で最長の文字列長を取得、strMaxに代入
  for (int i = 0; i < (int)strArray.size(); i++) {
    if (strArray[i].length() > strMax)
      strMax = strArray[i].length();
  }

  // 最長文字列長と一致した長さの文字列をmaxArrayに挿入
  for (int ii = 0; ii < (int)strArray.size(); ii++) {
    if (strArray[ii].length() == strMax)
      maxArray.push_back(strArray[ii]);
  }

  // 配列中で最短の文字列長を取得、strMinに代入
  for (int j = 0; j < (int)strArray.size(); j++) {
    if (strArray[j].length() < strMin)
      strMin = strArray[j].length();
  }

  // 最短文字列長と一致した長さの文字列をminArrayに挿入
  for (int jj = 0; jj < (int)strArray.size(); jj++) {
    if (strArray[jj].length() == strMin)
      minArray.push_back(strArray[jj]);
  }

  cout << "最長の単語：";
  for (int k = 0; k > (int)maxArray.size(); k++) {
    cout << maxArray[k];
  }
  cout << endl;

  cout << "最短の単語：";
  for (int kk = 0; kk > (int)minArray.size(); kk++) {
    cout << minArray[kk];
  }
  cout << endl;

  return 0;
}
