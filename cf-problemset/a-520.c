#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  int size;
  scanf("%d", &size);
  char s[size+1];
  scanf("%s", s);
  int vector[26], j = 0;
  memset(vector, 0, sizeof(vector));
  for(int i = 0; i < size; i++){
    if('A' <= s[i] && s[i] <= 'Z'){
      j = s[i] - 'A';
    }
    else if('a' <= s[i] && s[i] <= 'z'){
      j = s[i] - 'a';
    }
    else{
      continue;
    }
    vector[j] = 1;
  }
  for(int i = 0; i < 26; i++){
    if(vector[i] == 0){
      printf("NO\n");
      return 0;
    }
  }
  printf("YES\n");
  return 0;
}