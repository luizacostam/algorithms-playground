#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
  int n, count = 1, max_days = 0;
  scanf("%d", &n);
  long int numbers[n];
  for(int i = 0; i < n; i++){
    scanf("%ld", &numbers[i]);
    if(i > 0 && numbers[i] >= numbers[i-1]){
      count++;
    }else{
      count = 1;
    }
    if(count > max_days){
      max_days = count;
    }
  }
  printf("%d\n", max_days);
}