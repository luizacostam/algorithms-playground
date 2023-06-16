/*
    Given the size (nxm) of a matrix, how many moves are needed to go from 0,0 to n-1,m-1?
    Note: You can only go down or right
*/

#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>
using namespace std;

int grid_traveler(int n, int m, vector<int> DP, map<int, int> myMap){
    myMap.insert({n, m});
    if(find(DP.begin(), DP.end(), myMap[n]) != DP.end()) return DP[myMap[n]];
    if(n <= 1 && m <= 1) return 1;
    if(n == 0 || m == 0) return 0;
    DP[myMap[n]] = grid_traveler(n-1, m,DP, myMap) + grid_traveler(n, m-1, DP, myMap);
    return DP[myMap[n]];
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> DP(n+1, INT_MAX);
    map<int, int> myMap;
    cout << grid_traveler(n, m, DP, myMap) << endl;
}