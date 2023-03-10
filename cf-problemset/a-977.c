#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void func(int n, int k, int i) {
  if (k == i) {
    printf("%d\n", n);
    return;
  }else {
    if ((n % 10) != 0) {
      n -= 1;
    } else{
      n /= 10;
    }
    func(n, k, i+1);
  }
}
int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  func(n, k, 0);
}