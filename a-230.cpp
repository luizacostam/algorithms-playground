#include <bits/stdc++.h>
using namespace std;

int main(){
    long int s, n;
    cin >> s >> n;
    bool flag = true;
    pair <int, int> dragons[n];
    for(int i = 0; i < n; i++){
        cin >> dragons[i].first >> dragons[i].second;
    }
    sort(dragons, dragons + n);
    for(int i = 0; i < n; i++){
        if(dragons[i].first < s){
            s = s + dragons[i].second;
            flag = true;
        }
        else{
            flag = false;
        }
        if(flag == false){
            cout << "NO" << endl;
            break;
        }
    }
    if(flag == true){
        cout << "YES" << endl;
    }
}