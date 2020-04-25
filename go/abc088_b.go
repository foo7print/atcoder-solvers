package main

import (
  "bufio"
  "fmt"
  "os"
  "sort"
  "strconv"
  "strings"
)

func main() {
  var n int
  fmt.Scan(&n)

  stdin := bufio.NewScanner(os.Stdin)
  stdin.Scan()
  s := stdin.Text()

  split := strings.Split(s, " ")
  intList := convStringListToIntList(split)

  sort.Sort(sort.Reverse(sort.IntSlice(intList)))
  alice, bob := assignToAliceAndBob(intList)

  aliceSum := sum(alice)
  bobSum := sum(bob)
  fmt.Println(aliceSum - bobSum)
}

func convStringListToIntList(stringList []string) []int {
  intList := make([]int, len(stringList))
  for i, v := range stringList {
    iv, _ := strconv.Atoi(string(v))
    intList[i] = iv
  }
  return intList
}

func assignToAliceAndBob(list []int) ([]int, []int) {
  aliceList := make([]int, len(list))
  bobList := make([]int, len(list))
  c := 0
  for i, v := range list {
    if i%2 == 0 {
      aliceList[c] = v
    } else {
      bobList[c] = v
    }
    c += 1
  }
  return aliceList, bobList
}

func sum(list []int) int {
  var result int
  for _, v := range list {
    result += v
  }
  return result
}
