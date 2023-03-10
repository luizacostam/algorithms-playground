#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    char string[101];
    scanf("%s", string);
    int i = 0, upper = 0, lower = 0;
    for(i = 0; i < strlen(string); i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            upper++;
        }
        else if(string[i] >= 'a' && string[i] <= 'z'){
            lower++;
        }
    }
    if(lower > upper || lower == upper){
        for(int i = 0; i < strlen(string); i++){
            if(string[i] >= 'A' && string[i] <= 'Z'){
                string[i] = string[i] + 32;
            }
        }
    }
    else if(lower < upper){
        for(int i = 0; i < strlen(string); i++){
            if(string[i] >= 'a' && string[i] <= 'z'){
                string[i] = string[i] - 32;
            }
        }
    }
    printf("%s", string);
}