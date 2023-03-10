#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    char string[101];
    scanf("%s", string);
    int size = strlen(string), count = 1;
    for(int i = 1; i <= size; i++){
        if(string[i] == string[i-1]){
            count++;
          if(count == 7){
            printf("YES\n");
            return 0;
          }
        }else{
            count = 1;
        }
    }
    printf("NO\n");
}
