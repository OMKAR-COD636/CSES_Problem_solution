#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll a,b;
        cin>>a>>b;
        ll minab=min(a,b),diff=abs(a-b);
        if((a+b)%3==0 && diff<=minab) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
    return 0;
}