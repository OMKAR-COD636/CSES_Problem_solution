#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    ll n;
    cin>>n;
    ll sum=n*(n+1)/2;
    if(sum&1) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        ll k=sum/2;
        vector<ll>a;
        vector<ll>b;
        for(ll i=n;i>0;i--){
            if(k-i>=0){
                a.push_back(i);
                k-=i;
                // cout<<"a->"<<i<<" ";
            }
            else{
                b.push_back(i);
                // cout<<"b->"<<i<<" ";
            } 
                
        }
        ll an=a.size(),bn=b.size();
        cout<<an<<endl;
        for(int i=an-1;i>=0;i--){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<bn<<endl;
        for(int i=bn-1;i>=0;i--){
            cout<<b[i]<<" ";
        }
    }
    return 0;
}