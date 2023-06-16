#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int fat(int n, vector<int> DP){
    if(find(DP.begin(), DP.end(), n) != DP.end()) return DP[n];
    if(n == 1) return 1;
    DP[n] = n * fat(n-1, DP);
    return DP[n];
}
int main(){
    int n;
    cin >> n;
    vector<int> DP(n+1, INT_MAX);
    cout << fat(n, DP) << endl;
}