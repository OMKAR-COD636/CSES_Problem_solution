#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

bool safe(vector<vector<int>>&a,int row,int col){
    for(int i=0;i<row;i++){
        if(a[i][col]==1)
        return false;
    }
    
    for(int i=row, j=col;i>=0 && j>=0;i--,j--){
        if(a[i][j]==1)
            return false;
    }
    for(int i=row, j=col;i>=0 && j<8;i--,j++){
        if(a[i][j]==1)
            return false;
    }
    return true;
}

void placequeens(vector<vector<int>>&a,int row,int &count){
    if(row==8){
        count++;
        return;
    }
    for(int col=0;col<8;col++){
        if(safe(a,row,col)){
            a[row][col]=1;
            placequeens(a,row+1,count);
            a[row][col]=0;
        }
        
    }

    
}

int main() {
    int count=0;
    vector<vector<int>>b(8,vector<int>(8));
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            // char a;
            // cin>>a;
            // if(a=='.')
            // b[i][j]=0;
            // else
            // b[i][j]=1;
            b[i][j]=0;
        }
    }
    placequeens(b,0,count);
    cout<<count<<endl;
    return 0;
}