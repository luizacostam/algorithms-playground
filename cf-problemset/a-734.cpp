#include <iostream>
using namespace std;

int main(){
    int n, d = 0, a = 0;
    cin >> n;
    while(n--){
        char winner;
        cin >> winner;
        if(winner == 'D'){
            d++;
        }else{
            a++;
        }
    }
    d > a ? cout << "Danik" : a > d ? cout << "Anton" : cout << "Friendship" << endl;
}