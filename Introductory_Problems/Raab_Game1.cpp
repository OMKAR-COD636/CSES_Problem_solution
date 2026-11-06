#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int max_ab=max(a,b);
        int min_ab=min(a,b);
        vector<int>a1(n);
        vector<int>b1(n);
        for(int i=0;i<n;i++){
            a1[i]=i+1;
            b1[i]=i+1;
        }
        // rotate(a1.begin(),a1.begin()+2,a1.begin()+3);
        // for(int i=0;i<n;i++){
        //     cout<<a1[i];
        // }
        string res;
        int games=a+b;
        if(games>n) cout<<"No"<<"\n";
        else if(max_ab>=1 && min_ab<1) cout<<"No"<<"\n";
        else{
            cout<<"Yes"<<endl;
            //rotate to left, size of vector is no of games played, rotate the number of times b wins
            rotate(a1.begin(),a1.begin()+b,a1.begin()+games);
            for(int i=0;i<n;i++){
                cout<<a1[i]<<" ";
            }
            cout<<"\n";
            for(int i=0;i<n;i++){
                cout<<b1[i]<<" ";
            }
            cout<<"\n";
        }
    }
     
    return 0;
}