#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void bubble(int c,int numbers[], int i){
  if(i == c-1) return;
  else{
    if(numbers[i] > numbers[i+1]){
      int aux = numbers[i+1];
      numbers[i+1] = numbers[i];
      numbers[i] = aux;
    }
    bubble(c, numbers, i+1);
  }
}
void bubble_sort(int c, int numbers[]){
  if(c == 0){
    return;
  }else{
    bubble(c, numbers, 0);
    bubble_sort(c-1, numbers);
  }
}
int main(){
  int c;
  scanf("%d", &c);
  int numbers[c];
  for(int i = 0; i < c; i++){
    scanf("%d", &numbers[i]);
  }
  bubble_sort(c, numbers);
  for(int i = 0; i < c; i++){
    printf("%d ", numbers[i]);
  }
}