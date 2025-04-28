#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int users, contests, queries;
    cin >> users >> contests >> queries;

    vector<bool> unlocked_all(users+1, false);
    vector<set<int>> unlocked_single(users+1);

    while(queries--) {
        int step, x, y;
        cin >> step;

        if(step == 1) {
            cin >> x >> y;
            unlocked_single[x].insert(y);
        } else if(step == 2) {
            cin >> x;
            unlocked_all[x] = true;
        } else if(step == 3) {
            cin >> x >> y;
            if(unlocked_all[x] == true || unlocked_single[x].count(y) == true) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
}