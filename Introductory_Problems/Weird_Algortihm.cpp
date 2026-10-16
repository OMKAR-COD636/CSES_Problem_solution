#include <bits/stdc++.h>
using namespace std;
using ll = long long;
                                 
constexpr ll MOD = 1e9 + 7;

int main() {
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n&1) n=n*3+1;
        else n>>=1;
        cout<<n<<" ";
    }
    return 0;
}