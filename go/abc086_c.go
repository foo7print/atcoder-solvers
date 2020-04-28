package main

import (
	"fmt"
	"math"
)

func abs(n int) int {
	return int(math.Abs(float64(n)))
}

func travel(n int, t, x, y []int) string {
	post, posx, posy := 0, 0, 0
	for i := range t {
		difft := abs(t[i] - post)
		diffx := abs(x[i] - posx)
		diffy := abs(y[i] - posy)
		if difft < diffx+diffy {
			return "NO"
		}
		if difft%2 != (diffx+diffy)%2 {
			return "NO"
		}
		post = t[i]
		posx = x[i]
		posy = y[i]
	}
	return "YES"
}

func main() {
	var n int
	fmt.Scan(&n)
	time, x, y := make([]int, n), make([]int, n), make([]int, n)
	for i := range time {
		fmt.Scan(&time[i])
		fmt.Scan(&x[i])
		fmt.Scan(&y[i])
	}
	fmt.Println(travel(n, time, x, y))
}
