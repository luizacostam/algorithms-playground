#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
  int n, j = 1, count = 0;
  scanf("%d", &n);
  int num[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &num[i]);
  }
  for(int i = 0; i < n; i++){
    if(num[i] != num[j]){
      count++;
    }
    j++;
  }
  printf("%d\n", count);
}


