#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s1;
    string s2;
    string ulti;
    cin >> n;
    while (n--){
        cin >> s1 >> s2;
        int s = s1.size() + s2.size();
        int i = 0;
        while(i < s){
            if (i < s1.size())
                ulti += s1[i];
            if (i < s2.size())
                ulti += s2[i];
            i++;
        }
        cout << ulti << endl;   
        ulti.clear(); 
    }
}