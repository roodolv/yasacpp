#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Max(vector<int> v);
int min(vector<int> v);

int main() {
  vector<int> numArray;

  int res = 0;

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

  cout << endl << "最大値：" << Max(numArray) << endl;
  cout << "最小値：" << min(numArray) << endl;
  cout << "格納された配列要素：";
  for (int i = 0; i < (int)numArray.size(); i++) {
    cout << numArray[i] << " ";
  }
  cout << endl;

  return 0;
}

int Max(vector<int> v) {
  int maxVal = INT_MIN;
  for (int i = 0; i < (int)v.size(); i++) {
    if (v[i] >= maxVal)
      maxVal = v[i];
  }
  return maxVal;
}

int min(vector<int> v) {
  int minVal = INT_MAX;
  for (int i = 0; i < (int)v.size(); i++) {
    if (v[i] <= minVal)
      minVal = v[i];
  }
  return minVal;
}
