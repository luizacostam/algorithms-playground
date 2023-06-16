/*
Problem:
	Climbing Stairs

	You are climbing a stair case. It takes n steps to reach to the top.
	Each time you can either climb 1 or 2 steps.
	In how many distinct ways can you climb to the top?
*/

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int climb_stairs(int n, vector<int> DP){
    if(find(DP.begin(), DP.end(), n) != DP.end()) return DP[n];
    if(n == 0) return 1;
    if(n == 1) return 1;
    DP[n] = climb_stairs(n-1, DP) + climb_stairs(n-2, DP);
    return DP[n];
}
int main(){
    int stair;
    cin >> stair;
    vector<int> DP(stair+1, INT_MAX);
    cout << climb_stairs(stair, DP) << endl;
}