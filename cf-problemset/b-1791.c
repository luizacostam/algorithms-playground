#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  int pos[1000][50], col = 0, row = 0;
  for(int i = 0; i < t; i++){
    int size;
    scanf("%d", &size);
    char moves[size];
    scanf("%s", moves);
    for(int k = 0; k <= size; k++){
      if(row == 1 && col == 1 && k <= size){
        printf("YES\n");
        row = 0;
        col = 0;
        break;
      }
      if((row != 1 || col != 1) && k == size){
        printf("NO\n");
        row = 0;
        col = 0;
        break;
      }
      if(moves[k] == 'U'){
        row++;
      }
      else if(moves[k] == 'D'){
        row--;
      }
      else if(moves[k] == 'R'){
        col++;
      }
      else if(moves[k] == 'L'){
        col--;
      }
    }
  }
  
  return 0;
}