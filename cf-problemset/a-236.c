#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int mat[6][6], x = 0, y = 0, moves = 0;
    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 6; j++){
            scanf("%d", &mat[i][j]);
            if(mat[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    if(y == 1 || y == 5){
        moves = 2;
    }
    else if(y == 2 || y == 4){
        moves = 1;
    }
    if(x == 1 || x == 5){
        moves += 2;
    }
    else if(x == 2 || x == 4){
        moves += 1;
    }
    printf("%d\n", moves);
}