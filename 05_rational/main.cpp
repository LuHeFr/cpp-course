#include <iostream>
#include <rational.hpp>

using namespace std;

int main() {
  rational x{3, 4};
  rational y{5, 7};
  auto z = x * y;
  cout << z << "\n";
  z = shorten(z);
  cout << z << "\n";
}