#include <iostream>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    int mat[h][w];
    char alph[27] = {'?', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 0) cout << ".";
            else{
                cout << alph[mat[i][j]];
            }
        }
        cout << endl;
    }
}