fun main(args: Array<String>) {
  val n = readLine()!!.toInt()
  val ary = Array(n) { readLine()!!.toInt() }
  println(ary.distinct().count())
}
