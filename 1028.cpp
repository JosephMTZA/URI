#include <bits/stdc++.h>
using namespace std;

int euclides(int f1, int f2){
   if (f1 % f2 == 0){
      return f2;
   }else {
      return euclides(f2, f1 % f2);
   }
}

int main(){
   int n, f1, f2;

   cin >> n;
   while(n--){
      cin >> f1 >> f2;
      if (f2 > f1){
         int temp = f1;
         f1 = f2;
         f2 = temp;
      }
      //cout << n << f1 << f2 <<endl;
      cout << euclides(f1,f2) <<endl;
   }
}

