package main

import (
  "fmt"
  "strconv"
  "strings"
)

func main() {
  var n, a, b int
  fmt.Scanf("%d %d %d", &n, &a, &b)

  var count int
  for i := 1; i <= n; i++ {
    x := sumNumber(strconv.Itoa(i))
    if aOrMoreAndBOrLess(a, b, x) {
      count += i
    }
  }
  fmt.Println(count) 
}

func sumNumber(s string) int {
  numbers := strings.Split(s, "")
  var sum int
  for _, sv := range numbers {
    iv, _ := strconv.Atoi(sv)
    sum += iv
  }
  return sum
}

func aOrMoreAndBOrLess(a, b, x int) bool {
  result := false
  if a <= x && x <= b {
    result = true
  }
  return result
}
