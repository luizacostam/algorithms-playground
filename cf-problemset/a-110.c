#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void func(long long int n, int i){
    if(n <= 0){
        if(i == 4 || i == 7){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        return;
    }
    else{
        if(n%10 == 4 || n%10 == 7){
            i++;
        }
        func(n/10, i);
    }
}
int main(){
    long long int n;
    scanf("%lld", &n);
    func(n, 0);
}