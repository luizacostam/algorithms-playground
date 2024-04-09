#include <iostream>
using namespace std;

int main(){
    int n, d, ans = -1;
    cin >> n >> d;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(i+1 < n && arr[i+1] - arr[i] <= d){
            ans = arr[i+1];
            break;
        }
    }
    cout << ans << endl;
}