#include <iostream>
using namespace std;

int main(){
    long long int n, sum = 0, count = 0;
    cin >> n;
    long long int mat[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        sum = 0;
        for(int j = 0; j < n; j++){
            sum += mat[j][i];
        }
        if(sum == 0) count++;
    }
    if(count == 3) cout << "YES" << endl;
    else cout << "NO" << endl;
}