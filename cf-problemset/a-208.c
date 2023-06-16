#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main(){
  char song[201];
  scanf("%s", song);
  int size = strlen(song), aux = 0, i;
  for(i = 0; i < size; i++){
    if(song[i] == 'W' && song[i+1] == 'U' && song[i+2] == 'B'){
      i += 2;
      if(aux){
        printf(" ");
      }
    }else{
      printf("%c", song[i]);
      aux = 1;
    }
  }
  return 0;
}