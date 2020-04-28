fun main(args: Array<String>) {
  var s = readLine()!!
  var result = true

  while(s.length > 0 && result) {
    when {
      // endsWith()は「その文字列が指定した文字列で終了しているか」を判定するメソッド
      s.endsWith("dreamer") -> s = s.substring(0, s.lastIndexOf("dreamer"))
      s.endsWith("eraser") -> s = s.substring(0, s.lastIndexOf("eraser"))
      s.endsWith("dream") -> s = s.substring(0, s.lastIndexOf("dream"))
      s.endsWith("erase") -> s = s.substring(0, s.lastIndexOf("erase"))
      else -> result = false
    }
  }

  println(if(result) "YES" else "NO")
}