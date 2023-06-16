#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  long long int n;
  scanf("%lld", &n);

  if(n % 2 == 0) printf("%lld", n/2);
  else printf("%lld", (n+1)/2*(-1));
}
