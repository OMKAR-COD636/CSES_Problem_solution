#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>a(n);
    vector<ll>b(m);
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;
    sort(a.begin(),a.end(),[](ll a,ll b){
        return a>b;
    });
    sort(b.begin(),b.end(),[](ll a,ll b){
        return a>b;
    });
    ll count=0;
    ll i=0,j=0;
    while(i<n && j<m){
        if(a[i]-k<=b[j] && a[i]+k>=b[j])
        {
            count++;
            // cout<<a[i]<<" "<<b[i]<<endl;
            i++;
            j++;
        }
        else if(a[i]-k>b[j]){
            i++;
            continue;
        }
        else if(a[i]+k<b[j]){
            j++;
            continue;
        }
    }
    cout<<count<<endl;
    return 0;
}