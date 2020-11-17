#pragma once

unsigned int gcd(unsigned int x, unsigned int y);

// Structure defining a new type with name 'rational'
struct rational {
  int numerator;    // Member variable of type 'int' with name 'numerator'
  int denominator;  // Member variable of type 'int' with name 'denominator'
};

rational operator*(rational x, rational y) {
  return {x.numerator * y.numerator, x.denominator * y.denominator};
};

std::ostream& operator<<(std::ostream& os, rational r) {
  return os << r.numerator << '/' << r.denominator;
};

rational shorten(rational r) {
  const auto divisor = gcd(r.numerator, r.denominator);
  return {r.numerator / divisor, r.denominator / divisor};
};