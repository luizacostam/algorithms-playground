#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int min_bills(int n) {
    vector<int> DP(n+1, INT_MAX);
    DP[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int denom : {1, 5, 10, 20, 100}) {
            if (i >= denom) {
                DP[i] = min(DP[i], DP[i-denom] + 1);
                cout << DP[i] << endl;
            }
        }
    }
    return DP[n];
}

int main() {
    int n;
    cin >> n;
    cout << min_bills(n) << endl; 
    return 0;
}
