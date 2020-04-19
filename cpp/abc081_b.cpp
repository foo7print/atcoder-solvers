#include<iostream>
using namespace std;

int N;
// 最大200個なので余裕を持って210に(200以上ならなんでも良い)
int A[210];

int main() {
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> A[i];

  int res = 0;

  // 操作が行える限り操作を繰り返す
  while (true) {
    // A[i] がすべて偶数かどうかを判定するフラグ
    bool exist_odd = false;
    for (int i = 0; i < N; ++i) {
      if (A[i] % 2 != 0) exist_odd = true;
    }

    // 奇数があったらbreakする
    if (exist_odd) break;

    // 操作を行えるなら操作を実際に行う
    for (int i = 0; i < N; ++i) {
      A[i] /= 2;
    }
    // 操作回数をインクリメント
    ++res;
  }

  cout << res << endl;
}
