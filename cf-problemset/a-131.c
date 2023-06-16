#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int check(char *s){
    for(int i = 1; i < strlen(s);i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            return 1;
        }
    }
    return 0;
}
int main(){
    char s[101];
    scanf("%s", s);
    if(strlen(s) == 1){
        if(s[0] >= 'a' && s[0] <= 'z'){
            printf("%c", s[0] - 32);
        }else{
            printf("%c", s[0] + 32);
        }
        return 0;
    }
    if((s[0] >= 'a' && s[0] <= 'z') && (s[1] >= 'A' && s[1] <= 'Z')){
        if(check(s) == 0){
            for(int i = 1; i < strlen(s); i++){
                if(s[i] >= 'A' && s[i] <= 'Z'){
                    s[i] = s[i] + 32;
                }
            }
            s[0] = s[0] - 32;
        }
        printf("%s",s);
    }
    else if((s[0] >= 'A' && s[0] <= 'Z') && (s[1] >= 'A' && s[1] <= 'Z')){
        if(check(s) == 0){
            for(int i = 0; i < strlen(s); i++){
                if(s[i] >= 'A' && s[i] <= 'Z'){
                    s[i] = s[i] + 32;
                }
            }
        }
        printf("%s", s);
    }
    else{
        printf("%s", s);
    }
}