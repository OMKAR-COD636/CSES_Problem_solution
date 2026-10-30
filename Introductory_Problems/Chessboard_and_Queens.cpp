#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

bool safe(vector<vector<ll>>&a,ll row,ll col){
    for(ll i=0;i<8;i++){
        if(a[row][i]!="Q")
        return true;
    }
    for(ll i=0;i<8;i++){
        if(a[i][col]!="Q")
        return true;
    }
    for(ll i=row, j=col;i<8 && j<8;i++,j++){
        if(a[i][j]!="Q"){
            return true;
        }
    }
    return false;
}

void placequeen(){

}

int main() {
    vector<vector<ll>>a(8,vector<ll>(8));
    return 0;
}