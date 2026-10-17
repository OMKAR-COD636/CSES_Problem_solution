#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll r,c;
        cin>>r>>c;
        ll res=0;
        ll n=max(r,c);
        if(n&1){
            if(r>c) res=(r-1)*(r-1)+c;
            else res=c*c-(r-1);
        }
        else{
            if(r>c) res=r*r-(c-1);
            else res=(c-1)*(c-1)+r;
        }
        cout<<res<<endl;
    }
    return 0;
}