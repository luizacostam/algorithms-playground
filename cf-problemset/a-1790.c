#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//314159265358979323846264338327
int main(){
  int n, j, size, count = 0, error = 0;
  scanf("%d",&n);
  char pi[31] = {'3', '1', '4', '1', '5', '9', '2', '6', '5', '3', '5', '8', '9', '7', '9', '3', '2', '3', '8', '4', '6', '2', '6', '4', '3', '3','8', '3', '2', '7'};
  for(int i = 0; i < n; i++){
    char string[31];
    scanf("%s", string);
    j = 0;
    count = 0;
    size = strlen(string);
    for(int k = 0; k < size; k++){
      if(string[k] == pi[j] && j == k){
        count++;
        j++;
      }else if(string[k] != pi[j]){
        error++;
      }
      if(error == 1 && count == 0){
        count = 0;
        break;
      }
    }
    printf("%d\n", count);
  }
}
