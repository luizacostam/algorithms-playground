#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> rotate(vector<vector<int>> a){
    int n = a.size();
    vector<vector<int>> res(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            res[j][n-i-1] = a[i][j];
        }
    }
    return res;
}

int main(){
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    vector<vector<int>> b(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }

    for(int p = 0; p < 4; p++){
        bool ok = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] == 1 and b[i][j] == 0){
                    ok = false;
                }
            }
        }
        if(ok) {
            cout << "Yes" << endl;
            return 0;
        }
        a = rotate(a);
    }
    cout << "No" << endl;
    return 0;
}