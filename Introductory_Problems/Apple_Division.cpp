#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    int n;
    cin>>n;
    vector<ll>v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    cout<<sum<<endl;
    sort(v.begin(),v.end());

    sum/=2;
    ll groupsuma=0,groupsumb=0;
    for(int i=n-1;i>=0;i--){
        cout<<v[i]<<" ";
        if(sum-v[i]>=0){
            sum-=v[i];
            groupsuma+=v[i];
        }
        else groupsumb+=v[i];
    }
    // cout<<groupsuma<<endl;
    // cout<<groupsumb<<endl;
    ll res=abs(groupsuma-groupsumb);
    cout<<res<<endl;

    return 0;
}