#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int size, B_mark1 = 0, B_mark2 = 0, k_mark = 0, r_mark1 = 0, r_mark2 = 0, parity = 0;
    size = s.size();

    for(int i = 0; i < size; i++){
        if(s[i] == 'B' && B_mark1 == 0){
            B_mark1 = i+1;
        } else if(s[i] == 'B' && B_mark1 != 0){
            B_mark2 = i;
        }
        if(s[i] == 'K'){
            k_mark = i;
        }
        if(s[i] == 'R' && r_mark1 == 0){
            r_mark1 = i+1;
        } else if(s[i] == 'R' && r_mark1 != 0){
            r_mark2 = i;
        }
    }
    r_mark1 -= 1;
    B_mark1 -= 1;
    parity = (B_mark2 + B_mark1);
    if((B_mark1 < B_mark2) && (parity % 2 != 0) && r_mark1 < k_mark && k_mark < r_mark2){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}