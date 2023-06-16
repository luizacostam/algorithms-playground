#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n, h, count = 0, ans = 0;
    cin >> n >> h;
    int heights[n];
    for(int i = 0; i < n; i++){
       heights[i] = 1;
    }
    for(int i = 0; i < n; i++){
        int f;
        cin >> f;
        if(f > h){
            heights[i] = 2;
        }
    }
    for(int i = 0; i < n; i++){
        ans += heights[i];
    }
    cout << ans << endl;
}