#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int size = s.length();
    for(int i = 0; i < size; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cout << i+1 << endl;
            break;
        }
    }
}