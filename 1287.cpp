#include<bits/stdc++.h>
using namespace std;
int cont;
int main(){
    string s;

    while(getline(cin , s)){
        if(s.empty()){
            cout << "error" << endl;
            continue;
        }
        for (int i = 0; i < s.size(); i++){
            if (( !((int(s[i]) >= 48 && int(s[i]) <= 57) || int(s[i]) == 79 || int(s[i]) == 111 || int(s[i]) == 108 || int(s[i]) == 32 || int(s[i]) == 44))){
                cout << "error" << endl;
                cont++;
                break;
            }else if(int(s[i]) == 32 || int(s[i]) == 44){
                s.erase(s.begin()+i);
                i--;
            }else{
                if(s[i] == 'l'){
                    //cout << "es l" << endl;
                    s[i] = '1';
                }else if(s[i] == 'O' || s[i] == 'o'){
                    //cout << "es i" << endl;
                    s[i] = '0';
                }
            }
        }
        //cout << "cont " << cont << endl;
        if(cont < 1){
            try{
                s.erase(0, min(s.find_first_not_of('0'), s.size()-1));
                cout << stoi(s) << endl;
            }catch(const std::exception& e){
                cout << "error" << endl;
            }
        }
        cont = 0;
    }
}