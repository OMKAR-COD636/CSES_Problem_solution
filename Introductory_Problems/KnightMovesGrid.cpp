#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

vector<pair<int,int>> checkmoves(int a,int b,int n){
    vector<pair<int,int>>move;
    if((a-2)>=0 && (b-1)>=0) move.push_back({(a-2),(b-1)});
    if((a-2)>=0 && (b+1)<n) move.push_back({(a-2),(b+1)});
    if((a-1)>=0 && (b-2)>=0) move.push_back({(a-1),(b-2)});
    if((a-1)>=0 && (b+2)<n) move.push_back({(a-1),(b+2)});
    if((a+1)<n && (b-2)>=0) move.push_back({(a+1),(b-2)});
    if((a+1)<n && (b+2)<n) move.push_back({(a+1),(b+2)});
    if((a+2)<n && (b-1)>=0) move.push_back({(a+2),(b-1)});
    if((a+2)<n && (b+1)<n) move.push_back({(a+2),(b+1)});
    return move;
}

//requires BFS instead of Recursive DFS

int main() {
    int n;
    cin>>n;
    vector<vector<int>>a(n,vector<int>(n,0));
    unordered_map<int,bool>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            m[a[i][j]]=false;
        }
    }
    m[a[0][0]]=true;
    visit(a,0,0,m,0,1,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<(j==n-1?"\n":" ");
        }
    }
    return 0;
}