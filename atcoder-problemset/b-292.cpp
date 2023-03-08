#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int cards[n+1];
    memset(cards, 0, sizeof(cards));
    bool removed[n+1];
    memset(removed, false, sizeof(removed));
    for(int i = 0; i < q; i++){
        int c, x;
        cin >> c >> x;
        if(c == 1){
            cards[x] += 1;
            if(cards[x] == 2){
                removed[x] = true;
            }
        }
        else if(c == 2){
            removed[x] = true;
        }
        else if(c == 3){
            if(removed[x] == true){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
}