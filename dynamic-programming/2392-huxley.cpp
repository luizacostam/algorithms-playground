#include <iostream>
#include <vector>
using namespace std;

int moves(vector<vector<int>> v, int n, vector<int> DP){

}
int main(){
    int n;
    cin >> n;
    vector<vector<int>> v;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }
    vector<int> DP(n+1);
    cout << moves(v, n, DP) << endl;
}