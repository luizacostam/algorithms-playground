/*
    Write a function that returns any combination of elements that add up to the exactly targetSum.
    If there is no combination that adds up, then return null.
    If there are multiple combinations possible, you may return any single one.
*/
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

bool how_sum(int targetSum, int numbers[], int n, vector<int> DP){
    if(find(DP.begin(), DP.end(), targetSum) != DP.end()) return true;
    if(targetSum == 0) return true;
    
    
}
int main(){
    int targetSum, n;
    cin >> targetSum >> n;
    int numbers[n];
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    vector<int> DP(i+1, INT_MAX);
    how_sum(targetSum, numbers, n, DP);
}