#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int a, b, count = 0;
        cin >> a >> b;
        if(a == b){
            cout << "0" << endl;
        }
        else if(a > b){
            for(int i = 10; i > 0;){
                if(a - i >= b){
                    a -= i;
                    count++;
                    if(a == b){
                        cout << count << endl;
                    }
                }else{
                    i--;
                }
            }
        }
        else if(a < b){
            for(int i = 10; i > 0;){
                if(a + i <= b){
                    a += i;
                    count++;
                    if(a == b){
                        cout << count << endl;
                    }
                }else{
                    i--;
                }
            }
        }
    }
}

