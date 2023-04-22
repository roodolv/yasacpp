#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<int> even;
  vector<int> odd;

  int res = 0;

  do {
    cout << "正の整数を入力：";
    cin >> res;

    // -1が入力されていればこの時点でbreak
    if (res == -1)
      break;
    // 偶数の場合
    else if (res % 2 == 0)
      even.push_back(res);
    // 奇数の場合
    else
      odd.push_back(res);

  } while (res != -1);

  cout << "偶数：";
  for (int i = 0; i < even.size(); i++) {
    cout << even[i] << " ";
  }
  cout << endl;

  cout << "奇数：";
  for (int j = 0; j < odd.size(); j++) {
    cout << odd[j] << " ";
  }
  cout << endl;

  return 0;
}
