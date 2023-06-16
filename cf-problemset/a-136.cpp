#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x = 0;
    cin >> n;
    vector< pair <int, int>> ans;
    for(int i = 0; i < n; i++){
        cin >> x;
        ans.push_back(make_pair(x, i));
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i < n; i++){
        cout << ans[i].second+1 << " ";
    }
    cout << endl;
}