#include <iostream>

using namespace std;

int main(){
    for(int i = 8; i >= 1; i--){
        for(int j = 8; j >= 1; j--){
            char c;
            cin >> c;
            if(c == '*'){
                if(j == 8) cout << "a";
                else if(j == 7) cout << "b";
                else if(j == 6) cout << "c";
                else if(j == 5) cout << "d";
                else if(j == 4) cout << "e";
                else if(j == 3) cout << "f";
                else if(j == 2) cout << "g";
                else if(j == 1) cout << "h";

                cout << i << endl;
            }
        }
    }
}