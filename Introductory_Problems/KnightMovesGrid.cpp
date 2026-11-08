#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

void checkmoves(vector<vector<int>>&board,int a,int b,vector<pair<int,int>>&move){
    if((a-2)>=0 && (b-1)>=0) move.push_back({(a-2),(b-1)});
    if((a-2)>=0 && (b-1)>=0) move.push_back({(a-2),(b-1)});
    if((a-2)>=0 && (b-1)>=0) move.push_back({(a-2),(b-1)});
    if((a-2)>=0 && (b-1)>=0) move.push_back({(a-2),(b-1)});
    if((a-2)>=0 && (b-1)>=0) move.push_back({(a-2),(b-1)});
    if((a-2)>=0 && (b-1)>=0) move.push_back({(a-2),(b-1)});
    if((a-2)>=0 && (b-1)>=0) move.push_back({(a-2),(b-1)});
    if((a-2)>=0 && (b-1)>=0) move.push_back({(a-2),(b-1)});
}

int main() {
    int n;
    cin>>n;
    vector<vector<int>>a(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<(j==n-1?"\n":" ");
        }
    }
    return 0;
}