 #include <bits/stdc++.h>
 using namespace std;
 using ll = long long;
 
 constexpr ll MOD = 1e9 + 7;
 
 int main() {
    ll n,x;
    cin>>n>>x;
    vector<ll>w(n);
    for(auto &i :w) cin>>i;
    sort(w.begin(),w.end());
    int l=0,h=n-1,count=0;
    while(l<=h){
        //debug
        count++;
        if(w[l]+w[h]<=x){
            l++;
            h--;
        }
        else {
            h--;
        }
    }
    cout<<count<<endl;
    return 0;
 }