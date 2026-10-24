#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

void binaryconv(ll n,ll size){
    while(n>=0 && size!=0){
        size--;
        int a=n%2;
        cout<<a;
        n/=2;
    }
}

int main() {
    ll n;
    cin>>n;
    ll t=1<<n;
    vector<ll>v(t);
    for(int i=0;i<t;i++){
        v[i]=i^(i>>1); //efficient way of converting binary to gray
        binaryconv(v[i],n);
        // cout<<" "<<v[i];
        cout<<endl;

    }
    
    return 0;
}