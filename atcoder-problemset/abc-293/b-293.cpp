#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k = 0;
    cin >> n;
    int ids[200001], aux[2000001];
    for(int i = 1; i <= n; i++){
       cin >> ids[i];  
    } 
    for(int i = 1; i <= n; i++){
        if(!aux[i]) aux[ids[i]] = 1;
    } 

    for(int i = 1; i <= n; i++){
        if(!aux[i]){
            k++;
        } 
    }
    cout << k << endl;
    for(int i = 1; i <= n; i++){
        if(!aux[i]){
            cout << i << " ";
        }
    }
        
}