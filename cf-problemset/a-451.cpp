#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, aux;
    cin >> n >> m;
    aux = min(n,m);
    if(aux%2 == 0) cout << "Malvika" << endl;
    else cout << "Akshat" << endl;
}