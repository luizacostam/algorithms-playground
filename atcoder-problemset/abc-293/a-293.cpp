#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int size = s.length();
    for(int i = 0; i < (size/2); i++){
        swap(s[2*i-1+1], s[2*i+1]);
    }
    cout << s;
}