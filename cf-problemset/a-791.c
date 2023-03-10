#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void years(int a, int b, int i){
    a = a * 3;
    b = b * 2;
    if(a > b){
        printf("%d\n", i);
        return;
    }else{
        years(a, b, i+1);
    }
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    years(a,b, 1);
}