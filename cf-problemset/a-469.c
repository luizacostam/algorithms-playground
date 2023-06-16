#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void bubble(int *all_levels, int qnt, int i){
  if(i == qnt-1) return;
  else{
    if(all_levels[i] > all_levels[i+1]){
      int aux = all_levels[i];
      all_levels[i] = all_levels[i+1];
      all_levels[i+1] = aux;
    }
    bubble(all_levels, qnt, i+1);
  }
}
void bubble_sort(int *all_levels, int qnt){
  if(qnt == 0) return;
  else{
    bubble(all_levels, qnt, 0);
    bubble_sort(all_levels, qnt-1);
  }
}
void check_levels(int *all_levels, int qnt, int last_level){
  int j = 1, count = 0;
  for(int i = 0; i < qnt-1; i++){
    if(all_levels[i] != all_levels[j] && all_levels[i] <= last_level){
      count++;
    }
    j++;
  }
  if(count == last_level-1) printf("I become the guy.\n");
  else printf("Oh, my keyboard!\n");
  return;
}
int main(){
  int last_level, x_qnt, y_qnt, i, k = 0;
  scanf("%d %d", &last_level, &x_qnt);

  int x_levels[x_qnt];
  for(int i = 0; i < x_qnt; i++){
    scanf("%d", &x_levels[i]);
  }
  scanf("%d", &y_qnt);
  int y_levels[y_qnt];
  for(int i = 0; i < y_qnt; i++){
    scanf("%d", &y_levels[i]);
  }
  int qnt_total = x_qnt+y_qnt;
  if(qnt_total <= 0){
    printf("Oh, my keyboard!\n");
    return 0;
  }
  int all_levels[qnt_total];
  for(i = 0; i < x_qnt; i++){
    all_levels[i] = x_levels[i];
  }
  for(int j = 0; j < y_qnt; j++){
    all_levels[i] = y_levels[j];
    i++;
  }
  bubble_sort(all_levels, qnt_total);
  check_levels(all_levels, qnt_total, last_level);
  return 0;
}