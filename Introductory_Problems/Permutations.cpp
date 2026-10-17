#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    int n;
    cin>>n;
    vector<int>a;
    vector<int>b;

    if(n==1) cout<<1<<endl;
    else if(n<=3 ) cout<<"NO SOLUTION"<<endl;

    else{
        for(int i=1;i<n+1;i+=2){
            a.push_back(i);
        }
        for(int i=2;i<n+1;i+=2){
            b.push_back(i);
        }
        for(auto &i:b) cout<<i<<" ";
        for(auto &i:a) cout<<i<<" ";

    }

    return 0;
}