#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  vector<string> pattern = {"dream", "dreamer", "erase", "eraser"};
  string s; cin >> s;

  reverse(s.begin(), s.end());
  for(int i=0; i<4; i++) reverse(pattern[i].begin(), pattern[i].end());

  int i = 0, N = s.length();
  bool divide_all = true;
  for(; i<N; ) {
    // パターンがどれか1つ見つかったかどうかを表す変数
    bool found_pattern = false;
    for(int k=0; k<4; k++) {
      int len = pattern[k].size();
      if(s.substr(i, len) == pattern[k]) {
        found_pattern = true;
        i += len;
        break;
      }
    }

    if(found_pattern == false) {
      divide_all = false;
      break;
    }
  }

  if (divide_all == true) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
