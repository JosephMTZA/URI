#include <bits/stdc++.h>
using namespace std;

int abiertoCont, cerradoCont;
int main() {
  stack<char> s;
  string exp;
  while(cin >> exp){
    for (int i = 0; i< exp.size(); i++){
      if (exp[i] == '('){
        s.push(exp[i]);
        abiertoCont++;
      }
      else if(exp[i] == ')'){
        cerradoCont++;
        if (!s.empty()){
        s.pop();
        }else{
          break;
        }
      }
    }
    if(s.empty() && abiertoCont == cerradoCont){
      cout << "correct" << "\n";
    }else{
      cout << "incorrect" << "\n";
    }
    abiertoCont = 0;
    cerradoCont = 0;
    while(!s.empty()){
      s.pop();
    }
  }
}
