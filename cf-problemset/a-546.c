#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int cost_banana, dollars, number_bananas, final_cost = 0, friend = 0;
    scanf("%d %d %d", &cost_banana, &dollars, &number_bananas);
    for(int j = 1; j <= number_bananas; j++){
        final_cost += cost_banana * j;
    }
    friend = final_cost - dollars;
    if(friend <= 0){
        printf("0");
    }else{
        printf("%d\n", friend);
    }
}