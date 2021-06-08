#include <bits/stdc++.h>
#include <cstdio>
#include <ratio>
using namespace std;

int n, cont, pos, cant;
int billetes[7] = {100, 50, 20, 10, 5, 2, 1};
int cantidades[7] = {0, 0, 0, 0, 0, 0, 0};

int main(){
   cont = 0;
   pos = 0;
   cant = 0;
   scanf("%d", &n);
   while (pos < 7){
      if ((cant+billetes[pos]) <= n){
         cont += 1;
         cantidades[pos] = cont;
      }else{
         pos += 1;
      }
   printf("%d\n nota(s) de R$ 100,00", cantidades[1]);
   
   }
}
