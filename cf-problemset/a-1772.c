#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        printf("%d\n", n1+n2);
    }
}