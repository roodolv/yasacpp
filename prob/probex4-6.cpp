#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
  list<int> numArray;
  list<int>::iterator itr = numArray.begin();

  int res = 0;

  /* メインループ */
  do {
    cout << "正の整数を入力：";
    cin >> res;
    cout << endl;

    // -1が入力されていればこの時点でbreak
    if (res == -1)
      break;
    // -1以外の負の数を入力した場合はやり直し
    else if (res < 0) {
      cout << "正の整数を入力してください" << endl;
      continue;
    }
    // 正の整数が入力されたら格納
    else if (numArray.size() < 3) {

      // 昇順になるようにソート
      for (itr = numArray.begin(); itr != numArray.end(); itr++) {
        if (*itr < res)
          numArray.insert(itr, res);
      }
    }

    // list配列の全てを表示する
    cout << "入力された数：";
    for (itr = numArray.begin(); itr != numArray.end(); itr++) {
      cout << *itr << " ";
    }
    cout << endl;

  } while (res != -1);
  /* メインここまで */

  return 0;
}
