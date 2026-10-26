#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

void movedisk(ll S,ll D){
    cout<<S<<" "<<D<<"\n";
}

void toh(ll S,ll M,ll D,ll n){
    if (n==0) return;
    //move n-1 disk in middle 
    toh(S,D,M,n-1);
    //move nth disk to Right
    movedisk(S,D);
    //move n-1 disk to Right from middle
    toh(M,S,D,n-1);
}

int main() {
    ll n;
    cin>>n;
    //2^n-1 moves
    ll ans=(1<<n)-1;
    cout<<ans<<endl;
    toh(1,2,3,n);
    return 0;
}