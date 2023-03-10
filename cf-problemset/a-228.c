#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  int colors[4], count = 0;

  for(int i = 0; i < 4; i++){
    scanf("%d", &colors[i]);
  }
  for(int i = 0; i < 4; i++){
    for(int j = i+1; j < 4; j++){
      if(colors[i] == colors[j]){
        count++;
        break;
      }
    }
  }
  printf("%d\n", count);
}


