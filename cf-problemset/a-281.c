#include <stdio.h>
#include <ctype.h>

int main(){
    char c[1001];
    scanf("%s", c);
    c[0] = toupper(c[0]);
    printf("%s", c);
    return 0;
}