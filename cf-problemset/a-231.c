#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count(int mat[][3], int n){
    int cont = 0, aux = 0;
    int arr[n];
    memset(arr, 0, sizeof(arr));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            if(mat[i][j] == 1){
                cont++;
            }
        }
        if(cont >= 2){
          arr[i] = 1;
        }
        cont = 0;
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            aux++;
        }
    }
    return aux;
}
void func(int n){
    int mat[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    int problems = count(mat, n);
    printf("%d\n", problems);
}
int main(){
    int n;
    scanf("%d", &n);
    func(n);
}