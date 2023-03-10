#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    char string_s[101], string_t[101];
    scanf("%s %s", string_s, string_t);
    int size_s = strlen(string_s);
    int size_t = strlen(string_t);
    int i = 0, count = 0;
    if(size_s != size_t){
        printf("NO\n");
    }else{
        while(size_t >= 0 && i < size_s){
            if(string_s[i] == string_t[size_t-1]){
                count++;
            }
            i++;
            size_t--;
        }
        if(count == size_s){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}