#include <bits/stdc++.h>
#include <ostream>
using namespace std;

int main() {
  int n;
  int cont = 0;
  while (cin >> n && n) {
    long arreglo[n];
    for (int i = 0; i < n; i++) {
      cin >> arreglo[i];
    }
    sort(arreglo, arreglo + n);
    cont = 0;
    for (int i = 0; i < n; i += 1) {
      cont += 1;
      if (i == n - 1) {
        if (!(cont % 2 == 0)) {
          cout << arreglo[i] << "\n";
        }
      } else {
        if (arreglo[i] != arreglo[i + 1]) {
          if (!(cont % 2 == 0)) {
            cout << arreglo[i] << "\n";
          }
          cont = 0;
        }
        // if (arreglo[i] != arreglo[i + 1]) {
        // cout << arreglo[i] << "\n";
        // break;
      }
    }
  }
  return 0;
}
