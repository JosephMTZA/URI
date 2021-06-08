#include <bits/stdc++.h>
using namespace std;
int sign(int num) {
  if (num == 0) {
    return 0;
  }
  if (num > 0) {
    return 1;
  } else {
    return -1;
  }
}

void print_sign(int num) {
  if (num == 0) {
    cout << "0";
    return;
  }
  if (num > 0) {
    cout << "+";
  } else {
    cout << "-";
  }
}
typedef vector<int> vi;

class SegmentTree { // el arbol de segmentos se guarda como heap array
private:
  vi st, A; // recuerde que es vi es un vector de int
  int n;
  int left(int p) { return p << 1; }        // operaciones para obtener posicion
  int right(int p) { return (p << 1) + 1; } // de hijos izquierdo y derecho

  void build(int p, int L, int R) { // O(n log n)
    // el rango actual representado por la posicion p esta dado por L y R
    if (L == R)           // cuando L == R, se usa cualquiera de los dos
      st[p] = sign(A[L]); // almacena el valor
    else {                // recursivamente calcula los valores
      build(left(p), L, (L + R) / 2);
      build(right(p), (L + R) / 2 + 1, R);
      int p1 = st[left(p)], p2 = st[right(p)];
      st[p] = sign(p1 * p2);
    }
  }

  int rsq(int p, int L, int R, int i, int j) { // O(log n)
    // el rango actual esta dado por L y R
    // el rango deseado esta dado por i y j
    if (i > R || j < L)
      return 1; // rango actual fuera del rango deseado
    if (L >= i && R <= j)
      return st[p]; // rango actual completamente dentro
    // del rango deseado

    // calcula rsq de las partes izquierda y derecha
    int p1 = rsq(left(p), L, (L + R) / 2, i, j);
    int p2 = rsq(right(p), (L + R) / 2 + 1, R, i, j);

    return p1 * p2; // sumamos parte izq y der, como en el método build
  }

  int actualiza(int p, int L, int R, int idx, int new_value) {
    // el rango actual esta dado por L y R
    // si el indice a actualizar esta fuera del rango actual
    // regresamos lo que hay en la posicion actual de st
    if (idx > R || idx < L) {
      return st[p];
    }

    // si el rango actual es especificamente el indice idx a actualizar
    // actualizamos el valor contenido en el indice idx a new_value
    if (L == idx && R == idx) {
      A[idx] = new_value;          // actualizamos el arreglo subyacente
      return st[p] = sign(A[idx]); // y el arbol de segmentos
    }

    // encontramos los valores de las partes izquierda y derecha del rango
    int p1, p2;
    p1 = actualiza(left(p), L, (L + R) / 2, idx, new_value);
    p2 = actualiza(right(p), (L + R) / 2 + 1, R, idx, new_value);

    // actualizamos nuestra posicion con la suma de las partes izq y derecha
    // ademas de almacenarla
    return st[p] = p1 * p2;
  }

public:
  SegmentTree(const vi &_A) {
    A = _A;
    n = (int)A.size();   // copiamos contenido para uso local
    st.assign(4 * n, 0); // creamos el vector st con puros ceros
    build(1, 0, n - 1);  // construimos arbol de segmentos
  }

  int rsq(int i, int j) { return rsq(1, 0, n - 1, i - 1, j - 1); } // sobrecarga

  int actualiza(int idx, int new_value) {
    return actualiza(1, 0, n - 1, idx - 1, new_value);
  }
};
int nc, k, i, j, arr[100000];
char o;
int main() {
  while (cin >> nc >> k) {
    for (int x = 0; x < nc; x++) {
      cin >> arr[x];
    }                    // arreglo original
    vi A(arr, arr + nc); // copiamos contenido a un vector
    SegmentTree st(A);
   
    for (int x = 0; x < k; x++){
       cin >> o >> i >> j;
       if (o == 'C'){
          st.actualiza(i, j);
       }else if(o == 'P'){
          //cout << st.rsq(i,  j);
          print_sign(st.rsq(i, j));
       }
    }
   cout << endl;
  }
}
