#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, aux = 0;
    cin >> n >> m;
    char matrix[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            matrix[i][j] = '.';
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           if(i % 2 == 0){
            matrix[i][j] = '#';
           }
           if((i % 2 != 0) && (j == m-1) && (aux == 0)){
            if(matrix[i][0] != '#'){
                matrix[i][j] = '#';
                aux = 1;
            }
           }
           else if((i % 2 != 0) && (aux == 1)){
            matrix[i][j] = '#';
            aux = 0;
           }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j];
        }
        cout << endl;
    }
}