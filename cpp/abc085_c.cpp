#include<iostream>
using namespace std;

int main() {
  int N, Y; cin >> N >> Y;

  // zは引き算で求めて、2重ループする
  for (int x=0; x<=N; x++) {
    for (int y=0; y<=N; y++) {
      int z = N - x - y;
      if (z >= 0 and 10000*x + 5000*y + 1000*z == Y) {
        cout << x << " " << y << " " << z << endl;
        return 0;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
  return 0;
}
