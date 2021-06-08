#include <bits/stdc++.h>
using namespace std;
int nc, n, maxc; 
int v[100];
int w[100];
int memo[100][1001];

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
  for (int i = 0; i < nc; i++){
    cin >> n;
    cin >> maxc;
    for (int j = 0; j < n; j++){
      cin >> v[j] >> w[j];
    }
    for (int k = 0; k < n; k++){
      for (int z = 0; z <= maxc; z++){
        memo[k][z] = -1;
      }
    }
    cout << "Galho " << i+1 << ":" << endl;
    cout << "Numero total de enfeites: " << f(0,maxc) << endl;
    cout << endl;
  }
}
