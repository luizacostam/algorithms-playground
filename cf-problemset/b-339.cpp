#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, p = 0, count = 0;
    cin >> n >> m;
    for(int j = 0; j < m; j++){
        int i;
        cin >> i;
        if(p == i){
            continue;
        }
        cout << (p + i) % n << endl;
        if(((p + i) % n) <= n){
            count += abs(p-i);
        }
        else{
            count += n-p+i;
        }
        p = i;
        cout << count << " " << p << endl;
    }
    cout << count << endl;
}