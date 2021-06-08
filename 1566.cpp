#include <bits/stdc++.h>
using namespace std;

int readInt()
{
    bool minus = false;
    int result = 0;
    char ch = getchar_unlocked();
    while (true) {
        if (ch == '-')
            break;
        if (ch >= '0' && ch <= '9')
            break;
        ch = getchar_unlocked();
    }
    if (ch == '-')
        minus = true;
    else
        result = ch - '0';
    while (true) {
        ch = getchar_unlocked();
        if (ch < '0' || ch > '9')
            break;
        result = result * 10 + (ch - '0');
    }
    if (minus)
        return -result;
    else
        return result;
}

int p[3000000];
int main() {
 
  int n, nc;
  nc = readInt();
  while(nc--){
    n = readInt();
    for(int i = 0; i < n; i++){
      p[i] = readInt();
    }
    sort(p,p+n);
    for (int i = 0;i < n; i++){
      printf("%d", p[i]);
      if (i<n-1)
        printf(" ");
    }
    printf("\n");
  } 
}
