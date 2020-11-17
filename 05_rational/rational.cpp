unsigned int gcd(unsigned int x, unsigned int y) {
  while (y != 0) {
    auto tmp = y;
    y = x % y;
    x = tmp;
  }
  return x;
}