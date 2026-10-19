//there are nCr ways of putting r identical balls in n slots

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    int n;
    cin>>n;
    int total=0,a,ans,sum=2;
    for(int i=1;i<n+1;i++){
        a=i*i;
        total=a*(a-1)/2;
        sum=((i-2)*(i-1))/2;
        ans=total-(8*sum);
        //nCr - (8)*(1+2+3+....n-2 terms)
        cout<<ans<<endl;
    }
    return 0;
}