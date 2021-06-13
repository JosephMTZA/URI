#include <bits/stdc++.h>
using namespace std;

vector<char> v = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int getIndex(char K){
    auto it = find(v.begin(), v.end(), K);
 
    if (it != v.end()){
        int index = it - v.begin();
        return index;
    }else {
        return -1;
    }
}

int main(){
    int n;
    cin >> n;
    while(n--){
        string s, sfinal;
        int i;
        cin >> s;
        cin >> i;
        for (int k = 0; k < s.size(); k++){
            int index = getIndex(s[k]);
            int newIndex = index-i;
            if (newIndex < 0){
                newIndex = newIndex+v.size();
            }
            sfinal += v[newIndex];
        }
        cout << sfinal << endl;
    }
}