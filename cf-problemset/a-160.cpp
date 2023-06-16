#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, sum = 0, min_coins = 0, min_coins_sum = 0;
    cin >> n;
    int c[n];
    
    for(int i = 0; i < n; i++){
        cin >> c[i];
        sum += c[i];
    }
    sort(c, c+n);
    for(int i = n-1; i >= 0; i--){
        min_coins_sum += c[i];
        if(min_coins_sum > (sum - min_coins_sum)){
            min_coins++;
            break;
        }
        min_coins++;
    }
    cout << min_coins << endl;
}