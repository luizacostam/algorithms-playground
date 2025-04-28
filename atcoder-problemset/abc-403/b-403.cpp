#include <bits/stdc++.h>
using namespace std;

bool can_fit(string t, string u, long int j) {
    for (long int i = 0; i < u.size(); i++) {
        if (j + i >= t.size()) {
            return false;
        } 
        if (t[j + i] != '?' && t[j + i] != u[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string t, u;
    cin >> t >> u;
    bool fit = false;

    for (long int i = 0; i <= t.size() - u.size(); i++) {
        if (can_fit(t, u, i)) {
            fit = true;
            break;
        }
    }

    if (fit) cout << "Yes" << endl;
    else cout << "No" << endl;
}
