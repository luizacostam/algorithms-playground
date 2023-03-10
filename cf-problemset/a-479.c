#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max_value(int a, int b){
  return a > b ? a : b;
}

int main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int c1 = a + b + c;
  int c2 = a + b * c;
  int c3 = (a+b) * c;
  int c4 = a * b * c;
  int c5 = a * b + c;
  int c6 = a * (b+c);
  int max;

  max = max_value(c1, c2);
  max = max_value(max, c3);
  max = max_value(max, c4);
  max = max_value(max, c5);
  max = max_value(max, c6);
  printf("%d\n", max);
  return 0;
}