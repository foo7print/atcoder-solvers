fun main(args: Array<String>) {
  val a = readLine()!!.toInt()
  val b = readLine()!!.toInt()
  val c = readLine()!!.toInt()
  val x = readLine()!!.toInt()
  var ans = 0
  for (i in 0..a) {
    for (j in 0..b) {
      for (k in 0..c) {
        val sum = i * 500 + j * 100 + k * 50
        if (sum == x) ans++
      }
    }
  }
  println(ans)
}
