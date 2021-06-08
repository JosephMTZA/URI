#include <algorithm>
#include <bits/stdc++.h>
#include <ostream>
using namespace std;

int n;
string s;

int main(){
   scanf("%d", &n);
   for (int i = 0; i < n; i++){
      cin >> s;
      sort(s.begin(), s.end());
      int t = s.size();
      do {
         cout << s << "\n";
      }while (next_permutation(s.begin(), s.end()));
      printf("\n");
   }
}
