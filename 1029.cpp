#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n, int &count) {
  count++;
  if (n == 0){
    return 0;
  }
  if (n == 1){
    return 1;
  }
  return fibonacci(n-2, count)+fibonacci(n-1,count);
}

int main() {
  int n, fib,calls;
  cin >> n;
 
  while(n--){
    cin >> fib;
    calls = 0;
   
    string sep = (n == 0)?"":"\n";
   
    printf("fib(%d) = %d calls = %d\n",fib, calls-1, fibonacci(fib,calls));
    calls = 0;
  }
}
