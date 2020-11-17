#include <iostream>

#include "gauss_sum.hpp"  //Einbinden der Headerdatei, diese wird hier 1:1 "reingeschrieben"

using namespace std;

int main() {
  // Ziel Gauss sum(n)=1+2+3+4+...+n

  cout << "give me a number \n";
  int n;
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    cout << "Gauss (" << i << ") = " << gauss_sum(i) << " = " << gauss_sum_eq(i)
         << "\n";
  }
}
