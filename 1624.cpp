#include <bits/stdc++.h>
using namespace std;
#define MAXN = 100;
#define MAXP = 1000;
#define MAXW = 30;
int v[100];
int w[100];
int n;

int f(int i, int r){
  if (r < 0){
    return -100000;
  }else if (r == 0 || i == n){
    return 0;
  }else{
    int lotomo, nolotomo;
    nolotomo = f(i+1,r);
    lotomo = f(i+1, r-w[i])+v[i];
    return max(nolotomo, lotomo);
  }
}

int main() {
  while(cin>>n&&n){
    for (int i = 0; i<n; i++){
      cin >> v[i];
      cin >> w[i];
    }
    int r;
    cin >> r;
    int res = f(0,r);
    cout << res << endl;
  }
}

