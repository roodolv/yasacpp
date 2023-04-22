#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
  list<int> numArray;
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

  list<int>::iterator itr;

  // 2だったら削除する
  for (itr = numArray.begin(); itr != numArray.end(); itr++) {
    if (*itr == 2) {
      numArray.remove(*itr);
      itr = numArray.begin();
    }
  }

  // list配列の残り全てを表示する
  for (itr = numArray.begin(); itr != numArray.end(); itr++) {
    cout << *itr << " ";
  }
  cout << endl;

  return 0;
}
