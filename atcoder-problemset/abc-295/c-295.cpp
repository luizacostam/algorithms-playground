#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, ans = 0;
    cin >> n;
    map<int, int> myMap;
    
    for(int i = 0; i < n; i++){
        int s;
        cin >> s;
        myMap[s]++;
    }
    for(auto [_, count] : myMap){
        ans += count/2;
    }
    cout << ans << endl;
}