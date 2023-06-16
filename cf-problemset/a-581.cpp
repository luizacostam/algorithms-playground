#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, ans = 0;
    cin >> a >> b;
    ans = (abs(a - b)/2);
    if(a > b){
        cout << b << " ";
    }else{
        cout << a << " ";
    }
    cout << ans << endl;
    return 0;
}