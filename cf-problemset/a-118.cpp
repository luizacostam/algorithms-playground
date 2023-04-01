#include <bits/stdc++.h>
using namespace std;
bool vowel(char s){
    if(s == 'a' || s == 'A' || s == 'o' || s == 'O' || s == 'e'|| s == 'E' || s == 'i' || s == 'I' || s == 'u' || s == 'U' || s == 'y' || s == 'Y'){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s, ans;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
        if(vowel(s[i]) == true) continue;
        else{
            ans += '.';
            ans += tolower(s[i]);
        }
    }
    cout << ans << endl;
}