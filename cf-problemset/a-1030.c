#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int people[n], hard = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &people[i]);
        if(people[i] == 1){
            hard = 1;
        }
    }
    if(hard == 1) printf("HARD\n");
    else printf("EASY\n");
}