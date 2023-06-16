#include <bits/stdc++.h>
using namespace std;
void search(int numbers[], int of, int pos, int n){
    bool flag = false;
    int j = pos+1;
    while(of > 0 && j < n){
        flag = false;
        while(j < n && !flag){
            if(numbers[j] < 0){
                numbers[j] = 0;
                flag = true;
                of--;
            }
            j++;
        }
    }
    return;
}
int main(){
    int n, crimes = 0;
    cin >> n;
    int numbers[n];

    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    for(int i = 0; i < n; i++){
        if(numbers[i] > 0){
            search(numbers, numbers[i], i, n);
        }
    }
    for(int i = 0; i < n; i++){
        if(numbers[i] < 0){
            crimes++;
        }
    }
    cout << crimes << endl;
}