#include <iostream>

using namespace std;

int main(){
    int h, w;
    cin >> h >> w;

    for(int i = 1; i < h+1; i++){
        string s;
        cin >> s;
        for(int j = 0; j < w; j++){
            if(j+1 < w && s[j] == 'T' && s[j+1] == 'T'){
                s[j] = 'P';
                s[j+1] = 'C';
            }
        }
        cout << s << endl;
    }
}