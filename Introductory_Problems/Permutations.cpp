#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<n+1;i+=2){
        v.push_back(i);
    }
    for(int i=2;i<n+1;i+=2){
        v.push_back(i);
    }
    for(int i=n/2;i>=0;i--){
        cout<<v[i]<<" ";
    }
    for(int i=n-1;i>n/2;i--){
        cout<<v[i]<<" ";
    }

    return 0;
}