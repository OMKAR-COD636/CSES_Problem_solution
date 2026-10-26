#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    vector<string>v(8);
    for(int i=0;i<8;i++){
        cin>>v[i];
    }    
    ll count=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(v[i][j]=='.') count++;
        }
    }
    cout<<count<<endl;
    return 0;
}