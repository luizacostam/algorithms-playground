#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  char number1[101], number2[101];
  scanf("%s %s", number1, number2);
  int size = strlen(number1);
  int numbers[size], j = 0;

  for(int i = 0; i < size; i++){
    if(number1[i] == number2[i]){
      numbers[j] = 0;
      j++;
    }else if(number1[i] != number2[i]){
      numbers[j] = 1;
      j++;
    }
  }
  for(int i = 0; i < size; i++){
    printf("%d", numbers[i]);
  }
}


