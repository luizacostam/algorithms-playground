/*
    Write a function that returns the sum of the first n numbers.
*/

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int sum(int n, vector<int> DP){
    if(find(DP.begin(), DP.end(), n) != DP.end()) return DP[n];
    if(n == 1) return 1;
    DP[n] = n + sum(n-1, DP);
    return DP[n];
}
int main(){
    int n;
    cin >> n;
    vector<int> DP(n+1, INT_MAX);
    cout << sum(n, DP) << endl;
}