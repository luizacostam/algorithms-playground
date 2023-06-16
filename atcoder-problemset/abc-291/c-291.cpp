#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y = 0;
    vector<pair<int, int>> pos;
    pos.push_back({0,0});
    for(auto i : s){
        if(i == 'R') x++;
        if(i == 'L') x--;
        if(i == 'D') y--;
        if(i == 'U') y++;
        pos.push_back({x,y});
    }
    sort(pos.begin(), pos.end());
    int size = pos.size();
    for(int i = 0; i < size-1; i++){
        if((pos[i].first == pos[i+1].first) && (pos[i].second == pos[i+1].second)){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}