#include <bits/stdc++.h>
using namespace std;
int nc, n, maxc, maxr; 
int v[50];
int w[50];
int memo[50][5001];

int f(int i, int r){
  if (r<0){
    return -30001;
  }else if (r == 0 || i == n){
    return 0;
  }else{
    if (memo[i][r] == -1){
      memo[i][r] = max(f(i+1,r), f(i+1,r-w[i])+v[i]);
    }
    return memo[i][r];
  }
}

int main() {
  cin >> nc;
  while(nc--){
    cin >> n;
    for(int i = 0; i < n; i++){
      cin >> v[i] >> w[i];
    }
    cin >> maxc;
    cin >> maxr;

    for (int k = 0; k < n; k++){
      for (int z = 0; z <= maxc; z++){
        memo[k][z] = -1;
      }
    }
    //cout << f(0,maxc) << endl;
    
    if (f(0,maxc)-maxr < 0){
      cout << "Falha na missao" << endl;
     
    }else if(f(0,maxc)-maxr >= 0){
      cout << "Missao completada com sucesso" << endl; 
    }
    
  }
}
