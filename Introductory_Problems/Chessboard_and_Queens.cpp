#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

bool safe(vector<vector<ll>>&a,int row,int col){
    for(int i=0;i<8;i++){
        if(a[row][i]!="Q")
        return true;
    }
    for(int i=0;i<8;i++){
        if(a[i][col]!="Q")
        return true;
    }
    for(int i=row, j=col;i<8 && j<8;i++,j++){
        if(a[i][j]!="Q"){
            return true;
        }
    }
    return false;
}

void placequeens(vector<vector<ll>>&a ){
    for(int)
}

int main() {
    vector<vector<ll>>a(8,vector<ll>(8));
    return 0;
}