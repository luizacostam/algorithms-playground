#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    unordered_set<int> s;
    bool ans = false;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        s.insert(a);
    }

    for (auto a : s){
        if(s.find(a - x) != s.end() || s.find(a + x) != s.end()){
            ans = true;
            break;
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}