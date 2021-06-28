#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, maximo;
    cin >> n;
    cin.ignore();
    while(n--){
        string s;
        map<char,int> m;
        map<char,int>::iterator it;
        //itr = m.begin();
        getline(cin,s); 
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        for (int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }
        maximo = 0;
        for(auto it = m.cbegin(); it != m.cend(); ++it){
            //cout << it->first << " " << it->second << "\n";
            if(int(it->first) > 96 && int(it->first) < 123){
                if(it->second > maximo){
                    maximo = it->second;
                }
            }
            
        }
        //cout << "maximpo: " << maximo << endl;
        for(auto it = m.cbegin(); it != m.cend(); ++it){
            if (it->second == maximo && it->first != ' '){
                cout << it->first;
            }
        }
        cout << "\n";

    }
}