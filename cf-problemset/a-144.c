#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
  int n;
  scanf("%d", &n);
  int numbers[n], greater = 0, smaller = 100000, i = 0, i_min = 0, i_max = 0;
  memset(numbers, 0, sizeof(numbers));
  for(i = 0; i < n; i++){
    scanf("%d", &numbers[i]);
    if(numbers[i] > greater){
      i_max = i;
      greater = numbers[i];
    }
    if(numbers[i] <= smaller){
      smaller = numbers[i];
      i_min = i;
    }
  }
  int count_min = n - i_min -1;
  printf("%d\n", i_max + count_min - (i_min < i_max));
  return 0;
}