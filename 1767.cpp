#include <bits/stdc++.h>
#include <iostream>
#include <tuple>
using namespace std;
int v[100];
int w[100];
int memo[100][5001];
int nc, n, res;
//int maxr = 50;

int f(int i, int r){
  if (r < 0){
    return -300001;
  }else if (r == 0 || i == n){
    return 0;
  }else{
    if (memo[i][r] == -1){
      memo[i][r]= max(f(i+1,r), f(i+1, r-w[i])+v[i]);
    }
  return memo[i][r];
  }
}

int main() {
  cin >> nc;
  while(nc--){
    cin >> n;
  
    for (int i = 0; i < n; i++){
      cin >> v[i] >> w[i];
    }
    
    for (int k = 0; k < n; k++){
      for (int z = 0; z <= 50; z++){
        memo[k][z] = -1;
      }
    }
    
    //cout << endl;
    res = f(0,50);
    int peso;
    cout << res << " brinquedos" << endl;
    cout << endl;
    for (int k = 0; k < n; k++){
      for (int z = 0; z <= 50; z++){
        //cout << memo[k][z] << " ";
        if (memo[k][z] == res){
          peso = z;
          break;
        }
      }
      //cout << endl;
    }

    cout << peso << endl;
  }
}
