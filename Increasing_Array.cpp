#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    ll n,res=0;
    cin>>n;
    vector<ll>v(n);
    for(auto &i:v){
        cin>>i;
    }
    for(ll i=0;i<n-1;i++){
        if(v[i]>v[i+1])
        {
            res+=v[i]-v[i+1];
            v[i+1]=v[i];
        }        
    }
    cout<<res;
    
    return 0;
}
