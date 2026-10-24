#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    string s;
    cin>>s;
    map<char,int>m;
    for(auto& i:s) m[i]++;
    int odd=0;
    for(auto &i:m) {
        if(i.second&1)odd++;
        if(odd>1) break;
    }
    if (odd>1) cout<<"NO SOLUTION";
    else {
        string res="";
        string temp="";
        for(auto &i:m){
            if((i.second)%2==0){
                string a(i.second/2,i.first);
                temp+=a;
            }
        }
        res+=temp;
        
        for(auto &i:m){
            if(i.second&1) {
                string b(i.second,i.first);
                res+=b;
            }
        }
        reverse(temp.begin(),temp.end());
        res+=temp;
        cout<<res<<endl;
    }
    
    return 0;
}