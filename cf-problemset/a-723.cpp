#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, x2, x3, min_n, max_n;
    cin >> x1 >> x2 >> x3;
    min_n = min(x1, min(x2,x3));
    max_n = max(x1, max(x2,x3));
    cout << max_n-min_n << endl;
}