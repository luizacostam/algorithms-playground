#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void func(int n, int people, int max){
    if(n == 0){
        printf("%d\n", max);
        return;
    }
    else{
        int exit, enter;
        scanf("%d %d", &exit, &enter);
        people = (enter - exit) + people;
        if(people > max){
            max = people;
        }
        func(n-1, people, max);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    func(n, 0, 0);
}