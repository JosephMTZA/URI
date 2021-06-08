#include <bits/stdc++.h>
using namespace std;

int main(){
   map<string, int> m;
   map<string, int> v;
   string s, s2;
   map<string, int>::iterator itr; 
 
   while(cin >> s >> s2){
      ++m[s];
      ++v[s2];
   }
   printf("HALL OF MURDERERS\n");
   for (itr = m.begin(); itr != m.end(); ++itr){
      //int res = m[itr->first].compare(v[itr->first]);
      //if (!(m[itr->first] == v[itr->first]))
      if ((v.find(itr->first) == v.end()))
         cout << itr->first << " " << itr->second << endl;
   }
}

