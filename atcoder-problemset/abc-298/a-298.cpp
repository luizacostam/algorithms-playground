#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, count_good = 0, count_poor = 0;
    string s;
    cin >> n >> s;

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'o') count_good++;
        else if(s[i] == 'x') count_poor++;
    }
    
    if(count_good >= 1 && count_poor == 0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}