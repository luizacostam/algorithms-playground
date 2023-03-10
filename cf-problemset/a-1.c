#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    long long int n, m, a, p;
    scanf("%lld %lld %lld", &n, &m, &a);
    p = ceil((double)m/a) * ceil((double)n/a);
    printf("%lld\n", p);
}