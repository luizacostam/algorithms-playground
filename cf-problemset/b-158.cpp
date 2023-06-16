#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, x, ans = 0, a = 0, b = 0, c = 0, d = 0;
    cin >> n;

    while(n--){
        cin >> x;
        switch(x){
            case 1:
                a++; //number of groups with 1 person
                break;
            case 2:
                b++; //number of groups with 2 people
                break;
            case 3:
                c++; //number of groups with 3 people
                break;
            case 4:
                d++; //number of groups with 4 people
                break;
        }
    }
    ans += d; 
    ans += c; 
    a -= c; 
    if(a < 0) a = 0;

    if(b&1){ 
        b = b/2 + 1;
        ans += b;

        a -= 2;
        if(a < 0) a = 0;
    }else{
        b = b/2;
        ans += b;
    }

    a = ceil(a/4.0);
    ans += a;

    cout << ans << endl;
}