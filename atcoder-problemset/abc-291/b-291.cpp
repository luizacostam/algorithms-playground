#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, s, zeros = 0, aux = 0;
    double sum = 0.0;
    cin >> n;
    s = 5*n;
    double grades[s];
    for(int i = 0; i < s; i++){
        cin >> grades[i];
    }
    sort(grades, grades + s);
    for(int i = 0; i < n; i++){
        grades[i] = 0;
        grades[s-i-1] = 0;
    }
    for(int i = 0; i < s; i++){
        if(grades[i] == 0){
            zeros++;
        }
        sum += grades[i];
    }
    aux = s - (2*n);
    printf("%.15lf\n", sum/aux);
    // cout << setprecision(15) << sum/aux << endl;
}