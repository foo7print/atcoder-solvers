fun main(args: Array<String>) {
  readLine()!!
  var list = readLine()!!.split(" ").map{ it.toInt() }
  var ans = Int.MAX_VALUE
  for (i in list.indices) {
    var a = list[i]
    var count = 0
    while(a % 2 == 0) {
      a /= 2
      count++
    }
    ans = Math.min(ans, count)
  }
  println(ans)
}
