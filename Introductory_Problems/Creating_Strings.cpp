#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

void permutationstr(set<string> &a,string s,ll idx){
    if(idx== (s.size())) {
        a.insert(s);
        return;
    }

    for(ll i=idx;i<s.size();i++){
        swap(s[i],s[idx]);
        permutationstr(a,s,idx+1);
        swap(s[i],s[idx]);
    }
}


int main() {
    string s;
    cin>>s;
    set<string>a;
    permutationstr(a,s,0);
    
    for(auto &i:a){
        cout<<i<<endl;
    }
    return 0;
}