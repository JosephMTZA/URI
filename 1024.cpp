#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    char c;
    cin >> n;
    cin.ignore();
    while (n--){
        string s1;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++){
            c = s[i]; 
            if (int(c) > 64 && int(c) < 91 || int(c) > 96 && int(c) < 123 ){
                s1 += int(c)+3;  
            }else{
                s1 += c;
            }
        }
        reverse(s1.begin(), s1.end());
        for (int i = s1.size()/2; i < s.size(); i++){
            c = s1[i]; s1[i] = int(c)-1;
        }
        cout << s1 << endl;
    }
   
}