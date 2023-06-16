#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, count = 0;
    char c[101], s;
    scanf("%d %s", &n, c);
    s = c[0];
    for(int i = 1; i < strlen(c); i++){
        if(s == c[i]){
            count++;
        }
        s = c[i];
    }
    printf("%d\n", count);
}