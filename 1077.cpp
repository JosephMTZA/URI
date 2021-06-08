#include <bits/stdc++.h>
#include <cctype>
using namespace std;
map<char, int> op;
void showstack(stack<char> s) {
  while (!s.empty()) {
    cout << '\t' << s.top();
    s.pop();
  }
  cout << '\n';
}
void prioridad() {
  op['+'] = 1;
  op['-'] = 1;
  op['/'] = 2;
  op['*'] = 2;
  op['^'] = 3;
}

int main() {
  prioridad();
  string in;
  string post;
  stack<char> operadores;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> in;
    // cout << in << endl;
    for (int j = 0; j < in.size(); j++) {
      //cout << "In[j]" << in[j] << endl;
      if (isalnum(in[j])) {
        post += in[j];
      }
      if (in[j] == '(') {
        operadores.push(in[j]);
      }
      
      if (in[j] == '+' || in[j] == '-' || in[j] == '*' || in[j] == '/' ||
        in[j] == '^') {
        // char s = in[j];
        
        if (!operadores.empty()){
          while(op[in[j]] <= op[operadores.top()]) {
              post += operadores.top();
              operadores.pop();
            if (operadores.empty()) break;
          }
          //operadores.push(in[j]);
        }
        
        //if (op[in[j]] > op[operadores.top()]) {
          operadores.push(in[j]);
        //}
      }  
      if (in[j] == ')') {
        //cout << "entre a la condicion" << endl;
        while (operadores.top() != '(') {
          post += operadores.top();
          operadores.pop();
        }
        operadores.pop();
      }
    }
  //showstack(operadores);
  
  while (!operadores.empty()) {
    post += operadores.top();
    operadores.pop();
  }
  
  cout << post << endl;
  post = "";
  }
  
}
