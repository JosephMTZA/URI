#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
   int n, temp;
   while (cin >> n&&n){
      vector<int> v;
      vector<int> vi;
      for (int i = 0; i < n; i++){
         v.push_back(i+1);
      }

      while (v.size() > 1) {
         vi.push_back(v[0]);
         v.erase(v.begin());
         rotate(v.begin(), v.begin()+1, v.end());
      }   
      printf("Discarded cards: ");
      for (int i = 0; i < vi.size(); i++){
         string sep = (i == vi.size()-1)?"\n": ", ";
         cout << vi[i] << sep;
      }
      printf("Remaining card: ");
      cout << v[0] << "\n";
   }
}
