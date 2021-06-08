#include <bits/stdc++.h>
using namespace std;

//int n, m;
int main(){
   int n, m;
   cin >> n >> m;
   int cajeros[n];
   int tiempo[n];
   int clientes[m];
   for (int i = 0; i < n; i++){
      cin >> cajeros[i];
   }
   //int clientes[m];
   
   for (int i = 0; i < m; i++){
      cin >> clientes[i];
   }
   int t = 0;
   while(t < m){
      if (t < n){
         tiempo[t] = clientes[t] * cajeros[t];
         t++;
      }else{
         int index = tiempo[0];
         //cout << "este es el index " << index << endl;
         int k = 0;
         for (int i = 0; i < n; i++){
            if(index > tiempo[i]){
               index = tiempo[i];
               k = i;
            }
            
         }
         tiempo[k] += clientes[t] * cajeros[k];
         k = 0;
         t++;
      }
   }
   
   int index = tiempo[0];
   for (int i = 0; i < n; i++){
      if (index < tiempo[i]){
         index = tiempo[i];
      }
   }
   cout << index << endl;
}
