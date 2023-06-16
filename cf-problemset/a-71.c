#include <stdio.h>
#include <string.h>

void func(int n){
  if(n == 0) return;
  else{
    char string[101];
    scanf("%s", string);
    int size = strlen(string);
    if(size > 10){
        printf("%c%d%c\n", string[0], size-2, string[size-1]);
    }
    else{
      printf("%s\n", string);
    }
    func(n-1);
  }
}
int main(){
    int n;
    scanf("%d", &n);
    func(n);
}