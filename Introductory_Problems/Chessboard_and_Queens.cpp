#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

bool safe(vector<vector<int>>&board,int row,int col){
    if(board[row][col]==-1) return false;
    for(int i=0;i<row;i++){
        if(board[i][col]==1)
        return false;
    }
    for(int i=row,j=col;i>=0 && j<8;i--,j++){
        if(board[i][j]==1)
        return false;
    }
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]==1)
        return false;
    }
    return true;
}

void placequeens(vector<vector<int>>&a,int row,int &count){
    if(row==8)
    {
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
    vector<vector<int>>a(8,vector<int>(8,0));
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            char input;
            cin>>input;
            if(input=='*') a[i][j]=-1;
        }
    }
    placequeens(a,0,count);
    cout<<count;
    return 0;
}