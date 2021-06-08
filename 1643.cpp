#include <bits/stdc++.h>
//#include <bits/stdc++.h>
using namespace std;
int memo[23];
int main() {
   int t, num;
   int pos;
   int c = 0;
   memo[0]=0; memo[1]=1;
   for (int i=2; i < 23; i++) {
      memo[i]=memo[i-2]+memo[i-1];
      if (memo[i] > 25000)
         break;
      //cout << i << endl;
      //cout << memo[i] << endl;
   }
   //cout << memo[21] << endl;
   //cout << memo[22] << endl;
   //scanf("%d",&num);
   //printf("%d\n",memo[num]);
   //return 0;
   cin >> t;
   cout << "T: " << t << endl;
   while(t--){
      cin >> num;
      for (int i = 22; i > 0; i--){
         //cout << "Entre al ciclo" << endl;
         if (memo[i] > num){
            //cout << "numero en memo" << memo[i] << endl;
            continue;
         }else{
            pos = i;
            //cout << "pos igual a i " << pos << endl;
            num -= memo[i];
            //cout << "Numero despues de resta"  << num << endl;
            break;
         }
      }
      int arreglo[pos];
      arreglo[0] = 1;
      pos--;
      //cout << "Pos" << pos <<endl;
      for (int k = pos; k > 0; k--){
         c++;
         //cout << "ce: " << c <<endl;
         //cout << "ka: " << k << endl;
         if (memo[k] > num){
            //cout << "Jota: " << j << endl; 
            arreglo[c] = 0;
         }else {
            arreglo[c] = 1;
            num -= memo[k];
         }   
      }
      //pos--;
      //cout << "pos otra vez: " << pos << endl;
      for (int i=0; i < pos; i++){
         //cout << "al ciclo" << endl;
        //cout << arreglo[i] << " ";
      }
      int res = 0;
      //cout << "arreglo en pos" << arreglo[pos+1] << endl;
      arreglo[pos-1] = 0;
      for (int i = 0; i < pos; i++){
         if (arreglo[i] == 1){
            //cout << memo[pos-i] << endl;
            res += memo[pos-i];
         }
      }
      cout << res << endl;
   }
}
