#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string a("and"), no("not"), that("that"), the("the"), you("you");
    bool ans = false;
    while(n--){
        string s;
        cin >> s;
        if(s == a || s == no || s == that || s == the || s == you) ans = true;
    }
    if(ans == true) cout << "Yes" << endl;
    else cout << "No" << endl;
}