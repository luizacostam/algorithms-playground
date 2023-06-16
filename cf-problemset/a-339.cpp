#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s, ans;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '+') ans.push_back(s[i]);
    }
    sort(ans.begin(), ans.end());
    cout << ans[0];
    for(int i = 1; i < ans.length(); i++){
        cout << "+" << ans[i];
    }
    cout << endl;
}