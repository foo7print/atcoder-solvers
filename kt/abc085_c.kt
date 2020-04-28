fun main(args: Array<String>) {
  val (n, y) = readLine()!!.split(" ").map { it.toInt() }
  for (a in 0..n) {
    for (b in 0..n - a) {
      val c = n - a - b
      var sum = a * 10000 + b * 5000 + c * 1000
      if (sum == y) {
        println("$a $b $c")
        return
      }
    }
  }
  println("-1 -1 -1")
}
