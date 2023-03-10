#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main(){
  int n;
  scanf("%d", &n);
  double res = 0.0;
  for(int i = 0; i < n; i++){
    int juice;
    scanf("%d", &juice);
    res += juice;
  }
  printf("%.12lf", res/n);
}