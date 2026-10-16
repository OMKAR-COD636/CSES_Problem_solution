#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    ll n;
    cin>>n;
    vector<ll>v(n,0);
    for(ll i=0;i<n-1;i++){
        ll a;
        cin>>a;
        v[a-1]=1;
    }
    for(ll i=0;i<n;i++){
        if (v[i]==0){
        cout<<i+1;
        break;
        }
    }
    
    return 0;
}