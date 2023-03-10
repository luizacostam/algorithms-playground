#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, x = 0, aux = 0;
    scanf("%d",&n);
    char command[5];
    for(int i = 0; i < n; i++){
        scanf("%s", command);
        int size = strlen(command);
        for(int j = 0; j < size; j++){
            if(command[j] == '+'){
                aux = 1;
            }
            else if(command[j] == '-'){
                aux = 2;
            }
        }
        if(aux == 1) x++;
        else if(aux == 2) x--;
    }
    printf("%d\n", x);
}