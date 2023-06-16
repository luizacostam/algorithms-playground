#include <bits/stdc++.h>
using namespace std;

int find_g(vector <int> pieces, int n){
    int greater = 0;
    for(int i = 0; i < n; i++){
        if(pieces[i] > greater){
            greater = pieces[i];
        }
    }
    return greater;
}
int find_s(vector <int> pieces, int n){
    int smaller = 0;
    for(int i = 0; i < n; i++){
        if(pieces[i] < smaller){
            smaller = pieces[i];
        }
    }
    return smaller;
}
void sum(vector <int> pieces, int i, int s_dist, int n){
    if(i == n){
        return;
    }
    else{
        int greater = find_g(pieces, n);
        int smaller = find_s(pieces, n);
        if(greater - smaller > s_dist){
            s_dist = greater - smaller;
        }
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    vector <int> pieces;
    pieces.resize(m);
    for(int i = 0; i < m; i++){
        cin >> pieces[i];
    }
    sum(pieces, 0, 0, n);
}