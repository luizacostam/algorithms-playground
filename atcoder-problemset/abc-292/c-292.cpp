#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    int array[n+1];
    memset(array, 0, sizeof(array));
    for(int a = 1; a <= n; a++){
        for(int b = 1; a*b <= n; b++){
            array[a*b]++;
        }
    }
    for(int a = 1; a <= n; a++){
        sum += array[a] * array[n-a];
    }
    cout << sum << endl;
}