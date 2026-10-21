#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    ll n;
    cin>>n;
    ll ans=1;
    for(ll i=n;i>0;i--){
        ans*=2;
        ans=ans%MOD;
    }
    cout<<ans;
    return 0;
}