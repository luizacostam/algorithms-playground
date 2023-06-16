#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func(int n, int k, int *arr){
    int count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] >= arr[k-1] && arr[i] > 0){
            count++;
        }
    }
    return count;
}
int main(){
    int n, k, arr[50];
    memset(arr, 0, sizeof(arr));
    scanf("%d %d", &n, &k);
    printf("%d", func(n, k, arr));
}