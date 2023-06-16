#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c(n + m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
    for (int i = 0; i < n; i++) {
        int pos = lower_bound(c.begin(), c.end(), a[i]) - c.begin();
        cout << pos+1 << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++) {
        int pos = lower_bound(c.begin(), c.end(), b[i]) - c.begin();
        cout << pos+1 << " ";
    }
    return 0;
}
