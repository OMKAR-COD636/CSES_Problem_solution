#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<(i^j)<<(j==n-1?"\n":" ");
        }
    }
    return 0;
}