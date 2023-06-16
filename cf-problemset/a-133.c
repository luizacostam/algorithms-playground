#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  char string[101];
  scanf("%s", string);
  int size = strlen(string), j = 0;
  for(int i = 0; i < size; i++){
    if(string[i] >= 33 && string[i] <= 126){
      if(string[i] == 'H'){
        printf("YES\n");
        j = 1;
        break;
      }
      else if(string[i] == 'Q'){
        printf("YES\n");
        j = 1;
        break;
      }
      else if(string[i] == '9'){
        printf("YES\n");
        j = 1;
        break;
      }
    }
  }
  if(j == 0) printf("NO\n");
}