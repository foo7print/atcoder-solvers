#include<iostream>
#include<vector>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> d(N);
  for(int i=0; i<N; i++) cin >> d[i];

  // d[i]の値をカバーできる程度の数にする
  const int MAXD = 110;
  vector<int> A(MAXD);

  for(int i=0; i<N; i++) {
    // 値がd[i]である要素が1増える
    A[d[i]]++;
  }

  int ans = 0;
  // Aについて、0でない要素がいくつあるか求める
  for(int i=0; i<MAXD; i++) {
    if(A[i] != 0) ans++;
  }
  cout << ans << endl;
  return 0;
}
