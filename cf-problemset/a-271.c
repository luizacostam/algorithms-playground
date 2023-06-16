#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int year;
    scanf("%d", &year);
    int i = 0;
    while(i == 0){
        year += 1;
        int a = year/1000;
        int b = (year/100)%10;
        int c = year/10%10;
        int d = year%10;
        if(a != b && a != c && a != d && b != c && b != d && c != d){
            printf("%d\n", year);
            i = 1;
        }
    }
    
}