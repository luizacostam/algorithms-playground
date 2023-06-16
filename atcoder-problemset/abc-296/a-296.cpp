#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool ans = true;
    for(int i = 0; i < n; i++){
        if(n > 1){
            if(s[i] == 'F' && s[i+1] == 'F'){
                ans = false;
                break;
            }
            if(s[i] == 'M' && s[i+1] == 'M'){
                ans = false;
                break;
            }
        }
        else{
            break;
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}