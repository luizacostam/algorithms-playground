#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
  int t;
  scanf("%d", &t);
  for(int i = 0; i < t; i++){
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    if(a % b == 0){
      printf("0\n");
    }else{
      printf("%lld\n", b - (a%b));
    }
  }
}