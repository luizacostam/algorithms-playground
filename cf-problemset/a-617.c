#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, a = 0;
    scanf("%d", &n);
    if(n%5 != 0){
        a = (n/5) + 1;
    }else{
        a = n/5;
    }
    printf("%d\n", a);
}