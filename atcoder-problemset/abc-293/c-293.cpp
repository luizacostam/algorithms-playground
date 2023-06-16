#include <bits/stdc++.h>
using namespace std;
int out(int i, int j, int n, int m){
    return i < 0 || i == n || j == 0 || j == m;
}
void move(int i, int j, int n, int m, char map[][m], int *cont){
    int d[x] = {0, +1};
    int d[y] = {+1, 0};

    if(out(i, j, n, m)){
        return;
    }
    for(int k = 0; k < 2; k++){
        move(i+dx[k], j+dy[k], n, m, map,cont);
    }
    if(i == n-1 && j == m-1){
        (*cont)++;
    }
}
int main(){
    int h, w, cont = 0;
    cin >> h >> w;
    int mat[h][w];
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cin >> mat[i][j];
        }
    }
    move(0, 0, h, w, mat, &cont);
}