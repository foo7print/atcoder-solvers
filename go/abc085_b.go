package main

import (
  "fmt"
  "sort"
)

func main() {
  var n int
  fmt.Scanf("%d", &n)
  mochiList := make([]int, n)
  for i := 0; i < n; i++ {
    fmt.Scanf("%d", &mochiList[i])
  }
  sort.Sort(sort.IntSlice(mochiList))
  var count int
  preValue := 0
  for _, v := range mochiList {
    if preValue == 0 {
      // １つ目は無条件でカウントアップ
      count += 1
    } else if preValue != v {
      // 1つ目以降は前の値と比較し違う場合のみカウントアップ
      count += 1
    }
    preValue = v
  }
  fmt.Println(count)
}
