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
        if(odd>1) break;//more than one odd means palindrome not possible
    }
    if (odd>1) cout<<"NO SOLUTION";
    else {
        string res="";
        string temp="";
        for(auto &i:m){
            if((i.second)%2==0){
                //first half of even palindrome made using string repetition
                string a(i.second/2,i.first);
                temp+=a;
            }
        }
        res+=temp;
        //odd number characters in centre
        for(auto &i:m){
            if(i.second&1) {
                string b(i.second,i.first);
                res+=b;
            }
        }
        //second half of even palindrome reverse the first half
        reverse(temp.begin(),temp.end());
        res+=temp;
        cout<<res<<endl;
    }
    
    return 0;
}