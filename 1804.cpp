/* Codigo basado en la implementacion de Steven Halim para el RMQ
del libro Competitive Programming 3rd Edition */
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

class SegmentTree {      // el arbol de segmentos se guarda como heap array
private: vi st, A;                // recuerde que es vi es un vector de int
  int n;
  int left (int p) { return p << 1; }  // operaciones para obtener posicion
  int right(int p) { return (p << 1) + 1; }  //de hijos izquierdo y derecho

  void build(int p, int L, int R) {                           // O(n log n)
    // el rango actual representado por la posicion p esta dado por L y R
    if (L == R)              // cuando L == R, se usa cualquiera de los dos
      st[p] = A[L];                                   // almacena el valor
    else {                            // recursivamente calcula los valores
      build(left(p) , L              , (L + R) / 2);
      build(right(p), (L + R) / 2 + 1, R          );
      int p1 = st[left(p)], p2 = st[right(p)];
      st[p] = p1 + p2;
    } 
  }

  int rsq(int p, int L, int R, int i, int j) {                  // O(log n)
    // el rango actual esta dado por L y R
    // el rango deseado esta dado por i y j
    if (i >  R || j <  L) return 0; // rango actual fuera del rango deseado
    if (L >= i && R <= j) return st[p]; //rango actual completamente dentro
    // del rango deseado 

     // calcula rsq de las partes izquierda y derecha
    int p1 = rsq(left(p) , L              , (L+R) / 2, i, j);
    int p2 = rsq(right(p), (L+R) / 2 + 1, R          , i, j);

    return p1+p2;       // sumamos parte izq y der, como en el método build
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
      A[idx] = new_value; // actualizamos el arreglo subyacente
      return st[p] = A[idx]; // y el arbol de segmentos
    }

    // encontramos los valores de las partes izquierda y derecha del rango 
    int p1, p2;
    p1 = actualiza(left(p) , L              , (L + R) / 2, idx, new_value);
    p2 = actualiza(right(p), (L + R) / 2 + 1, R          , idx, new_value);

    // actualizamos nuestra posicion con la suma de las partes izq y derecha
    // ademas de almacenarla
    return st[p] = p1+p2;
  }

public:
  SegmentTree(const vi &_A) {
    A = _A; n = (int)A.size();         // copiamos contenido para uso local
    st.assign(4 * n, 0);            // creamos el vector st con puros ceros
    build(1, 0, n - 1);                   // construimos arbol de segmentos
  }

  int rsq(int j) { return rsq(1, 0, n - 1, 0, j-1); }    // sobrecarga

  int actualiza(int idx, int new_value) {
    return actualiza(1, 0, n - 1, idx, new_value); }

};
  
int main() {
  int nc, indexs;
  char p;
  scanf("%d", &nc);
  int arr[nc];

  for (int j = 0; j < nc; j++) {
    scanf("%d", &arr[j]);
  }

  // arreglo original
  vi A(arr, arr + nc);                     // copiamos contenido a un vector
  SegmentTree st(A);
  int i;

  while(cin >> p >> indexs){   
      //scanf("%c %d", &p, &i);
      //printf("%c\n", p);
      //printf("%d\n", i);
      if (p == 'a'){
        st.actualiza(indexs-1, 0);
      }
      if (p == '?'){
        printf("%d\n", st.rsq(indexs-1));
      }
      //for (int k = 0; k < n; k++){
      //   printf("%d ", buggies[k]);
      //}
      //printf("\n");

   }
  /*
  printf("              idx    0, 1, 2, 3, 4,  5, 6\n");
  printf("              A es {18,17,13,19,15, 11,20}\n");
  printf("RSQ(1, 3) = %d\n", st.rsq(1, 3));                 // respuesta=49
  printf("RSQ(4, 6) = %d\n", st.rsq(4, 6));                 // respuesta=46
  printf("RSQ(3, 4) = %d\n", st.rsq(3, 4));                 // respuesta=34
  printf("RSQ(0, 0) = %d\n", st.rsq(0, 0));                 // respuesta=18
  printf("RSQ(0, 1) = %d\n", st.rsq(0, 1));                 // respuesta=35
  printf("RSQ(0, 6) = %d\n", st.rsq(0, 6));                // respuesta=113

  printf("              idx    0, 1, 2, 3, 4,  5, 6\n");
  printf("Cambiamos a A  en  {18,17,13,19,15,100,20}\n");
  st.actualiza(5, 100);                    // cambiamos A[5] de 11 a 100
  printf("Estas consultas no cambian:\n");
  printf("RSQ(1, 3) = %d\n", st.rsq(1, 3));                           // 49
  printf("RSQ(3, 4) = %d\n", st.rsq(3, 4));                           // 34
  printf("RSQ(0, 0) = %d\n", st.rsq(0, 0));                           // 18
  printf("RSQ(0, 1) = %d\n", st.rsq(0, 1));                           // 35
  printf("Estas consultas si cambian:\n");
  printf("RSQ(0, 6) = %d\n", st.rsq(0, 6));                          // 202
  printf("RSQ(4, 6) = %d\n", st.rsq(4, 6));                          // 135
  printf("RSQ(4, 5) = %d\n", st.rsq(4, 5));                          // 115
  */
  return 0;
}
