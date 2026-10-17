#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r,c;
        cin>>r>>c;
        int res=0;
        int max_rc=max(r,c);
        if(max_rc&1){
            if(r>c) res=pow(r-1,2)+c;
            else res=pow(c,2)-(r-1);
        }
        else{
            if(r>c) res=pow(r,2)-(c-1);
            else res=pow(c-1,2)+r;
        }
        cout<<res<<endl;
    }
    return 0;
}