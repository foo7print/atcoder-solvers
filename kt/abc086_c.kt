fun main() {
  val n = readLine()!!.toInt()
  val ary = Array(n + 1) { IntArray(3) { 0 }}
  repeat(n) {
    val (t, x, y) = readLine()!!.split(" ").map { it.toInt() }
    ary[it][0] = t
    ary[it][1] = x
    ary[it][2] = y
  }
  val result = ary.sortedBy { it[0] }
  for (i in 0 until n) {
    val time = result[i + 1][0] - result[i][0]
    val dist = Math.abs((result[i + 1][1] + result[i + 1][2]) - (result[i][1] + result[i][2]))
    if (dist > time || dist % 2 != time % 2) {
      println("No")
      return
    }
  }
  println("Yes")
}