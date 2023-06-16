/*
    Is it possible to generate the target sum using numbers from the array?
    You may use an element of the array as many times as needed.
    You may assume that all input numbers are nonnegative.
*/
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

bool possible(int target_sum, int array[], int n, vector<int> DP){
    if(find(DP.begin(), DP.end(), target_sum) != DP.end()) return true;
    if(target_sum == 0) return true;
    if(target_sum < 0) return false;

    for(int i = 0; i < n; i++){
        int new_target_sum = target_sum - array[i];
        if(possible(new_target_sum, array, n, DP) == true){
            DP[target_sum] = true;
            return true;
        }
    }
    DP[target_sum] = false;
    return false;
}
int main(){
    int target_sum, size;
    cin >> target_sum >> size;
    int array[size];
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
    vector<int> DP(size+1, INT_MAX);
    possible(target_sum, array, size, DP) == true ? cout << "Yes" << endl : cout << "No" << endl;
}