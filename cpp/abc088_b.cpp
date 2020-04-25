#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  int N; cin >> N;
  vector<int> A(N);
  for(int i=0; i<N; i++) cin >> A[i];

  // 数列を昇順にソート
  sort(A.begin(), A.end());
  // 数列を降順にソート
  reverse(A.begin(), A.end());

  // （先手が取るものの総和） - （後手が取るものの総和）を計算
  int ans = 0;
  for(int i=0; i<N; i++) {
    if (i % 2 == 0) {
      // 偶数番目なら先手が取る
      ans += A[i];
    } else {
      // 奇数番目なら後手が取る
      ans -= A[i];
    }
  }
  cout << ans << endl;
  return 0;
}
