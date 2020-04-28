package main

import (
  "fmt"
)

func main() {
  var n, y int
  fmt.Scanf("%d %d", &n, &y)

  fmt.Println(checkNumbers(n, y))
}

func checkNumbers(n, y int) (int, int, int) {
  for a := 0; a <= n; a++ {
    for b := 0; b <= n; b++ {
      sum := 10000*a + 5000*b + 1000*(n-a-b)
      if (n - a - b) >= 0 {
        if sum == y {
          return a, b, (n - a - b)
        }
      }
    }
  }
  return -1, -1, -1
}
