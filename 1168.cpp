#include<bits/stdc++.h>
using namespace std;

int arr[] = {6,2,5,5,4,5,6,3,7,6};
map<char,int> m = { {'0', 6}, {'1', 2}, {'2', 5,}, {'3', 5}, {'4', 4}, {'5', 5}, {'6',6}, {'7', 3}, {'8', 7}, {'9', 6} };
int main(){
    int n,sum;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        sum = 0;
        cin >> s;
        
        for(int j = 0; j < s.size(); j++){
            char s1 = s[j];
            sum += m[s1];            
        }
        cout << sum << " leds" << endl;
    }
}