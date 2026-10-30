#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

//Watched soln after 2 failed approaches

ll mindiff(ll index,ll suma, ll sumb,vector<ll>&a){
    ll n=a.size();
    if(index==n) return abs(suma-sumb);
    ll c,d; 
    c=mindiff(index+1,suma+a[index],sumb,a);
    d=mindiff(index+1,suma,sumb+a[index],a);
    return min(c,d);
}

int main() {
    int n;
    cin>>n;
    vector<ll>v(n);
    for(auto &i:v) cin>>i;
    ll res=mindiff(0,0,0,v);
    cout<<res<<endl;
    return 0;
}