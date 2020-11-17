int gauss_sum(int n) {  // dekleration einer Funktion bei dem eine Zahl erwartet
                        // (int) wird.
  int result = 0;
  for (int i = 1; i <= n; ++i) {
    result = result + i;
  }
  return result;  // definitive Rückgabe des Ergebnisses (bei mehreren Variablen
                  // sinnvoll und teils notwendig)
}

int gauss_sum_eq(int n) {  //
  return n * (n + 1) / 2;
}

int fac_sum(int n) {  // Definition der Fakultät
  int result = 1;
  for (int i = 1; i <= n; ++i) {
    result = result * i;
  }
  return result;
}