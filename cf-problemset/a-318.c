#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  long long int n, k;
  scanf("%lld %lld", &n, &k);
  
  if(k >= 1 && k <= ((n+1)/2)) printf("%lld\n", (2*k-1));
  else printf("%lld\n", (2*(k-((n+1)/2))));
}


