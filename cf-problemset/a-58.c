#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    char string[101];
    scanf("%s", string);
    char hello[6] = {'h', 'e', 'l', 'l', 'o'};
    int size = strlen(string), j = 0;
    for(int i = 0; i < size; i++){
        if(string[i] == hello[j] && j<5){
            j += 1;
        }
    }
    if(j == 5){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}