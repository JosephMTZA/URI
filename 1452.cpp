#include <bits/stdc++.h>
#include <iostream>
#include <ostream>
using namespace std;

int main(){
   int n, m, num;
   string input;
   bool flag = true;
   while(flag){
      vector <vector<string>> servidores;
      vector <vector<string>> usuarios;

      int res = 0;
      //cout << "introduzca n y m" << endl;
      cin >> n >> m;
      if (n == 0 && m == 0){
         flag = false;
      }else{
         for (int i = 0; i < n; i++){
            //cout << "introduzca numero de servers" << endl;
            vector <string> server;
            cin >> num;
            for (int j = 0; j < num; j++){
               
               cin >> input;
               server.push_back(input);
               //server.erase(server.begin() + 0);
            }
            servidores.push_back(server);
         }
         /*
         for (int i = 0; i < servidores.size(); i++) {
            for (int j = 0; j < servidores[i].size(); j++)
               //cout << i << endl;
               cout <<  servidores[i][j] << " ";
            cout << endl;
         }
         */
         
         for (int i = 0; i < m; i++){
            //cout << "introduzca numero de users" << endl;
            vector <string> user;
            cin >> num;
            for (int j = 0; j < num; j++){
               cin >> input;
               //cout << input << endl;
               user.push_back(input);
               //server.erase(server.begin() + 0);
            }
            usuarios.push_back(user);
         }
         /*
         for (int i = 0; i < usuarios.size(); i++) {
            for (int j = 0; j < usuarios[i].size(); j++)
               //cout << i << endl;
               cout <<  usuarios[i][j] << " ";
            cout << endl;
         }
         */
         
         for (int i = 0; i < usuarios.size(); i++){
            for (int j = 0; j < servidores.size(); j++){
               for (int z = 0; z < usuarios[i].size(); z++){
                  //bool found = false; 
                  //cout << usuarios[i][z] << " ";
                  if (find(servidores[j].begin(), servidores[j].end(), usuarios[i][z]) != servidores[j].end()){
                     res += 1;
                     break;
                  }
                     
               }
               //cout << endl;
            }            
         }
         
         cout << res << endl;
      }
   }
}
