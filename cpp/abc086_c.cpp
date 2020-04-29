#include<iostream>
#include<vector>
#include<cstdlib> // absを使うため
using namespace std;

int main()
{
  int N; cin >> N;
  vector<int> t(N+1), x(N+1), y(N+1);

  t[0] = x[0] = y[0] = 0; // 初期状態
  for(int i=1; i<=N; i++) cin >> t[i] >> x[i] >> y[i];

  bool can_travel = true;
  for(int i=0; i<N; i++) {
    int dt = t[i+1] - t[i];
    // 絶対値はabsで取得可能
    int dist = abs(x[i+1] - x[i])+ abs(y[i+1] -y[i]);

    if(dist > dt) can_travel = false;
    if ((x[i + 1] + y[i + 1]) % 2 == (x[i] + y[i]) % 2) {
      // 偶数が同じ場合はdtが偶数でなければならない
      if (dt % 2 != 0) can_travel = false;
    } else {
      // 偶奇が異なる場合はdtが奇数でなければならない
      if (dt % 2 != 1) can_travel = false;
    }
  }
  if(can_travel) cout << "Yes" << endl;
  else cout << "No";
  return 0;
}
