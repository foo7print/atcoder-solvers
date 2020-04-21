#include<iostream>
using namespace std;

// 桁和を求める関数
int digit_sum(int n) {
  int sum = 0;
  while (n > 0)
  {  // nが0になるまで
    sum += n % 10;

    // C++ での割り算は小数点以下は切り捨てになる
    n /= 10;
  }
  return sum;
}

// 整数Nが与えられたら、桁和sumを返すプログラム
int main()
{
  int N, A, B; cin >> N >> A >> B;
  int ans = 0;
  for (int i = 1; i <= N; i++) {
    int sum = digit_sum(i);
    if (A <= sum && sum <= B)
    {
      ans += i;
    }
  }
  cout << ans << endl;
  return 0;
}
