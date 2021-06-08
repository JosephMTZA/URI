#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
   int nc, n, k;
   cin >> nc;
   for (int i = 1; i < nc + 1; i++){
      cin >> n >> k;
      int men[n+1];
      //cout << "K: " << k << endl;
      
      for (int j = 1; j < n+1; j++){
         men[j] = 1;
      }
   
      int pos = 1;
      int eliminar = 1;
      int eliminados = 0;
      int index = -1;
      while (true){
         /*
         cout << "Posicion: " << pos << endl;
         cout << "Eliminar: " << eliminar << endl;
         cout << "Eliminados: " << eliminados << endl;
         cout << "Index: " << index << endl;
         */
         if (eliminar % k == 0){
            //cout << "Es modulo" << endl;
            if (men[pos] == 0){
               //cout << "Solo avanze una posicion" << endl;
               pos++;
               
            }else{
               //cout << "Elimine una posicion" << endl;
               men[pos] = 0;
               pos++;
               eliminar++;
               eliminados++;              
            }
         
         }else{
            if (men[pos] == 0){
               pos++;
            }else{
               //cout << "Aumento eliminar: " << endl;
               index = pos; 
               pos++;
               eliminar++;
            }
         }
         
         if (eliminados == n-1){
            break;
         }
         
         if (pos > n){
            //cout << "resetee pos" <<endl;
            pos = 1;
         }
      }

      cout << "Case " << i << ": " << index << endl;
   }
}


