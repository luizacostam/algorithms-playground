#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n, count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int people, capacity;
        scanf("%d %d", &people, &capacity);
        if(capacity - people >= 2){
            count++;
        }
    }
    printf("%d\n", count);
}