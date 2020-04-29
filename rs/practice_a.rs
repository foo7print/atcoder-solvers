// １行の標準入力を型 T の値として返す
fn read1<T: std::str::FromStr>() -> T {
  let mut s = String::new();
  std::io::stdin().read_line(&mut s).ok();
  s.trim().parse().ok().unwrap()
}

// １行の標準入力を delimiter で区切り、Vec<T> として返す
fn readn<T: std::str::FromStr>(delimiter: &str) -> Vec<T> {
  let s = read1::<String>();
  s.split(delimiter).map(|e| e.parse().ok().unwrap()).collect::<Vec<T>>()
}

fn main() {
  let a = read1::<i32>();
  let bc = readn::<i32>(" ");
  let b = &bc[0];
  let c = &bc[1];
  let s = read1::<String>();
  println!("{} {}", a+b+c, s);
}