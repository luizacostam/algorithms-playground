#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int fib(int n, vector<int> DP){
    if(find(DP.begin(), DP.end(), n) != DP.end()) return DP[n];
    if(n <= 2) return 1;
    DP[n] = fib(n-1, DP) + fib(n-2, DP);
    return DP[n];
}
int main(){
    int n;
    cin >> n;
    vector<int> DP(n+1, INT_MAX);
    cout << fib(n, DP) << endl;
}