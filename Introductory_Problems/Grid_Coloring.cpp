#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<char>>v(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char a;
            cin>>a;
        }
    }
    for(int i=0;i<n;i++){
        if((i)%4==0){
            for(int j=0;j<m;j++){
                if(j%2==0){
                    cout<<'A';
                }
                else
                cout<<'B';
            }
        }
        if((i-1)%4==0){
            for(int j=0;j<m;j++){
                if(j%2!=0){
                    cout<<'A';
                }
                else
                cout<<'B';
            }
        }
        if((i-2)%4==0){
            for(int j=0;j<m;j++){
                if(j%2==0){
                    cout<<'C';
                }
                else
                cout<<'D';
            }
            
        }
        if((i-3)%4==0){
            for(int j=0;j<m;j++){
                if(j%2!=0){
                    cout<<'C';
                }
                else
                cout<<'D';
            }
        }
        cout<<endl;
    }

    return 0;
}