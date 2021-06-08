#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    
    int t,m,n;
    string s1, s2, lyric, res;
    cin >> t;
    while(t--){
        map <string, string> diccionario;
        map <string, string>::iterator itr;
        cin >> m >> n;
        cin.ignore();
        while(m--){
            getline(cin, s1);
            getline(cin, s2);
            diccionario.insert(make_pair(s1, s2));
	    }
        /*
        cout << endl;
        cout << "Diccionario" << endl;
        for(itr = diccionario.begin(); itr!=diccionario.end();++itr){
		    cout << itr->first << " " << itr->second <<endl;
	    }
        */
        while(n--){
            //string res;
			getline(cin,lyric);
			string temp;
            vector <string> v;
            for (int i = 0; i < lyric.size(); i++){
                //cout << lyric[i] << endl;
                if (lyric[i] != ' '){
                    temp += lyric[i];
                    //temp += " ";
                    //cout << "Lyric" << temp << endl;
                }else{
                    v.push_back(temp);
                    temp.clear();
                }
                
            }
            //cout << "Temp final" << temp << endl;
            v.push_back(temp);
            temp.clear();
            //cout << endl;
            //cout << "Size" << v.size() << endl;
            //cout << "Vector" << endl;
            /*
            for (int i = 0; i < v.size(); i++){
                cout << v[i] << endl;
            }
            //cout << endl;
            */
            for(int i = 0; i < v.size(); i++){
                //cout << "v en i" << v[i] << endl;
                string espacio =  (i < v.size()-1) ? " ":"\n";  
                if (diccionario.find(v[i]) != diccionario.end()){
                    
                    res += diccionario[v[i]];
                    res += espacio;
                    //cout << "Diccionario en lyric" << diccionario[v[i]] << endl;
                    //cout << res << endl;
                }else{
                    res += v[i];
                    res += espacio;
                    //cout << res << v[i];
                }
            }
            v.clear();
		    cout << res;
            res.clear();
        }
    }
}
