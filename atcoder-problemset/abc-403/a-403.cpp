#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    int a[n+1];

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0) {
            sum += a[i];
        }
    }

    cout << sum << endl;
}
