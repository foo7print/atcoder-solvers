fun main(args: Array<String>) {
  readLine()!!
  var list = readLine()!!.split(" ").map{ it.toInt() }
  var card = list.sortedDescending()
  var alice = 0
  var bob = 0
  var turn = true
  for (i in card.indices) {
    if(turn) alice += card[i] else bob += card[i]
    turn = !turn
  }
  println(alice - bob)
}
