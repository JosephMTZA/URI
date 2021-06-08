#include <bits/stdc++.h>
using namespace std;
int n, maxc; 
int v[20];
int w[20];
int memo[100][1201];

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
  while(cin >> n&&n){
    cin >> maxc;
    for(int i = 0; i < n; i++){
      cin >> v[i] >> w[i];
    }
    for (int k = 0; k < n; k++){
      for (int z = 0; z <= maxc; z++){
        memo[k][z] = -1;
      }
    }
    
    cout << f(0,maxc) << " min." << endl;
  }
}
