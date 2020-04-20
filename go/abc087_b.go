package main

import (
  "fmt"
)

func main() {
  var a, b, c, x int

  fmt.Scanf("%d", &a)
  fmt.Scanf("%d", &b)
  fmt.Scanf("%d", &c)
  fmt.Scanf("%d", &x)
  
  count := 0
  for va := 0; va <= a; va++ {
    for vb := 0; vb <= b; vb++ {
      for vc := 0; vc <= c; vc++ {
        sum := va*500 + vb*100 + vc*50
        if sum == x {
          count += 1
        }
      }
    }
  }
  fmt.Println(count)
}
