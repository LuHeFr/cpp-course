#include <gauss_sum.hpp>  //Einbinden der Headerdatei, diese wird hier 1:1 "reingeschrieben"
#include <iostream>

using namespace std;

int main() {
  // Ziel Gauss oder Facultät
  int decision = 0;
  cout
      << "Do you want to have Gauss, then press 1, or Facultät, then press "  // Abfrage ob mann Gauss oder Facultät haben will
         "2:\n";
  cin >> decision;
  int n;

  if (decision == 1) {  // Einführung der If-Schleife - Gauss
    cout << "Give me a number for Gauss(n):\n";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
      cout << "Gauss (" << i << ") = " << gauss_sum(i) << " = "
           << gauss_sum_eq(i) << "\n";
    }
  }

  else if (decision == 2) {  // Facultät
    cout << "Give me a number for Fakultät(n):\n";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
      cout << "Fakultät (" << i << ") = " << fac_sum(i) << " = "
           << gauss_sum_eq(i) << "\n";
    }
  }

  else {
    cout << decision << " was the wrong funtion. Start again.";
  }
}
