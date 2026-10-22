#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    ll n;
    cin>>n;
    ll count=0,a=1;
    //5^9*2^9=10^9 so 5^9 * 1024= 10^9 ~ 5^13 >10^9
    for(ll i=1;i<=13;i++){
        a*=5;
        count+=n/a;
    }
    cout<<count<<endl;
    return 0;
}