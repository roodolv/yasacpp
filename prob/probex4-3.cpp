#include <iostream>
#include <string>
#include <vector>

using namespace std;

void checkDigit(const vector<int> &v, const int digit);

int main() {
  vector<int> numArray;
  int res = 0;

  /* メインループ */
  do {
    cout << "正の整数を入力：";
    cin >> res;

    // -1が入力されていればこの時点でbreak
    if (res == -1)
      break;
    // -1以外の負の数を入力した場合はやり直し
    else if (res < 0) {
      cout << "正の整数を入力してください" << endl;
      continue;
    }
    // 正の整数が入力されたら動的配列に格納
    else
      numArray.push_back(res);

  } while (res != -1);
  /* メインここまで */

  cout << endl;

  for (int i = 0; i < 10; i++) {
    cout << "一の位が" << i << "：";
    checkDigit(numArray, i);
    cout << endl;
  }

  return 0;
}

void checkDigit(const vector<int> &v, const int digit)
{
  bool Nothing = 1;
  for (int i = 0; i < (int)v.size(); i++) {
    if (v[i] % 10 == digit) {
      cout << v[i] << " ";
      Nothing = 0;
    }
  }
  if (Nothing != 0)
    cout << "なし";
}
