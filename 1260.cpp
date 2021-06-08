#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  cin.ignore();
  while(n--){
    string s1;
    map<string, int> arboles;
    map<string, int> :: iterator it;
    while(getline(cin, s1) && !s1.empty()){
      ++arboles[s1];
    }
    int sum = 0;
    for (it = arboles.begin(); it != arboles.end(); it++){
      sum += it->second;  
    }
    
    for (it = arboles.begin(); it != arboles.end(); it++){
      cout << fixed;
      cout << setprecision(4);
      cout << it->first << " " << ((it->second/(double)sum)*100)<< endl;   
    }
    if (n > 0){
      cout << endl;
    }
    
  }
}
