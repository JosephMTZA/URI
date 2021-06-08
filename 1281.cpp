#include <bits/stdc++.h>
#include <cstdio>
#include <string.h>
using namespace std;

struct producto{
   char nombre_p[50];
   float precio;
};

int nc, m, p, cant;
float total;
char produ[50];
int main(){
   cin >> nc;
   for (int i = 0; i < nc; i++){
      
      cin >> m;
      
      struct producto prds[m];
      
      for (int j = 0; j < m; j++){
         cin >> prds[j].nombre_p >> prds[j].precio;
      } 
      
      cin >> p;
      
      for (int j = 0; j < p; j++){
         cin >> produ >> cant;
         for (int k = 0; k < m; k++){
            if (strcmp(prds[k].nombre_p, produ) == 0){
               total += cant*prds[k].precio;
               break;
            }
         }
      }
      printf("R$ %.2f\n", total);
      total = 0.0;
   }
}
