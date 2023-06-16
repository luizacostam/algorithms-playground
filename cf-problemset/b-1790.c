#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t>0){
    int n, s, r, q;
    scanf("%d %d %d", &n, &s, &r);
    int arr[n];
    q = n;
    for(int i = 0; i < q; i++){
      arr[i] = 1;
    }
    arr[n-1] = s - r;
    r = r - (q - 1);
    n = n - 2;
    for(int j = n; j >= 0; j--){
      for(int a = arr[q - 1] - 1; a >= 1; a--){
        if(r >= a){
          arr[j] += a;
          r -= a;
          break;
        }
      }
    }
    for(int i = 0; i < q; i++){
      printf("%d ", arr[i]);
    }
    printf("\n");
    t--;
  }
}
