#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        long int number;
        cin >> number;
        if(number % 2 == 0){
            cout << ((number/2)-1) << endl;
        }
        else{
            cout << (number/2) << endl;
        }
    }
}