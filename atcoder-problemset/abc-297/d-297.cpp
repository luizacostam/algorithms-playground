#include <bits/stdc++.h>
using namespace std;


int main(){
    long long int a, b, count = 0;
    cin >> a >> b;

    if(a < b){
        swap(a,b);
    }
    while(b != 0){
        count = a/b;
        a = a % b;
        swap(a,b);
    }
    cout << count-1 << endl;
}