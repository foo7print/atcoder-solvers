fun main(args: Array<String>) {
  val (n, a, b) = readLine()!!.split(" ").map{ it.toInt() }
  // 1以上n以下の整数に各桁の和がa以上b以下になるか」でfilterをかけ、最後にそれらの和をsum()で返す
  var ans = (1..n).filter{ check(it.toString(), a, b) }.sum()
  println(ans)
}

fun check(s: String, a: Int, b: Int): Boolean {
  var sum = 0
  // まず対象の整数を文字列に変換し、1文字ずつ「'0'で引いたものを足し合わせていく」という操作をし、各文字はchar型として扱われているので、'0'で引くとASCIIコード的に該当する数字と同じものが得られる
  for (i in s.indices) sum += s[i] - '0'
  if (sum in a..b) return true else return false
}
