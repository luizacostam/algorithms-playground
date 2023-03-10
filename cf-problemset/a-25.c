#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, count_z = 0, count_o = 0, even = 0, odd = 0;
    scanf("%d", &n);
    int numbers[n];
    for(int i = 1; i <= n; i++){
        scanf("%d", &numbers[i]);
        if(numbers[i] % 2 == 0){
            numbers[i] = 0;
            count_z++;
            even = i;
        }
        else if(numbers[i] % 2 != 0){
            numbers[i] = 1;
            count_o++;
            odd = i;
        }
    }
    if(count_z < count_o){
        printf("%d\n", even);
    }
    else{
        printf("%d\n", odd);
    }
}