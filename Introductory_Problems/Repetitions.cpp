#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

int main() {
    string s;
    cin>>s;
    int l=0,r=0;
    int max_count=0,count=0;
    while(l<=r && r<s.size()){
        max_count=max(count,max_count);
        if(s[l]==s[r]) { 
            count++;
            r++;
        }
        else {
            count=0;
            l++;
        }
    }
    max_count=max(count,max_count);
    cout<<max_count<<endl;
    return 0;
}