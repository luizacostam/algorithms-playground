#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0, j = 0;
    cin >> n;
    int host[n], guest[n];
    for(int i = 0; i < n; i++){
        cin >> host[i] >> guest[i];
    }
    for(int i = 0; i < n; i++){
        j = 0;
        while(j < n){
            if(host[i] == guest[j]){
                count++;
            }
            j++;
        }
    }
    cout << count << endl;
}