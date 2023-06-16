#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    for(int i = 0; i < s.size(); i++){
        if(s[i] < 92) s[i] += 32;
        if(t[i] < 92) t[i] += 32;
    }
    if(s<t) cout << -1;
    else if(s>t) cout << 1;
    else cout << 0;
}