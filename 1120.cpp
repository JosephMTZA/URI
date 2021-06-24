#include<bits/stdc++.h>
using namespace std;

int cont;
int main(){
    string n;
    char d;
    while (true){
        cin >> d >> n;
        if(d == '0' && n == "0"){
            break;
        }
        for (int i = 0; i < n.size(); i++){
            if (n[i] == d){
                n.erase(n.begin()+i);
                i--;
            }
        }
        //int cont;
        if (!n.empty()){
            for(int i = 0; i < n.size(); i++){
            if (n[i] == n[0]){
                cont++;
            }
        } 
        //cout << cont << endl;
        n.erase(0, min(n.find_first_not_of('0'), n.size()-1));
        if (cont == n.size() && cont > 2)
            n.erase(1);
        cout << n << endl; 
        }else{
            cout << 0 << endl;
        }
        cont = 0;
    }
}