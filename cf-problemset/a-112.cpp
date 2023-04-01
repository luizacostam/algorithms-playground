#include <iostream>
#include <cstring>
using namespace std;

int f_ans(int ans){
    if(ans > 0) return 0;
    else if(ans == 1) return -1;
    else if(ans == -1) return 1;
}
int main(){
    string s, t;
    cin >> s >> t;
    int ans = strcmp(s.c_str(), t.c_str());
    cout << f_ans(ans) << endl;
}