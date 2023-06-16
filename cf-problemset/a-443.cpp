#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    set <char> aux;
    int size = str.length();
    for(int i = 0; i < size; i++){
        if(str[i] != ',' && str[i] != '{' && str[i] != '}' && str[i] != ' '){
            aux.insert(str[i]);
        }
    }
    int size_aux = aux.size();
    cout << size_aux;
}