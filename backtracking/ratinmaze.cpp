#include<bits/stdc++.h>
using namespace std;
bool wecango(int a , int b , vector<vector<int> >&grid){
    return (a<grid.size() or b<grid.size() and a>=0 and b>=0){grid[a][b]=1}; 
}
int rat(int i, int j , vector<vector<int> >&grid){
    int n = grid.size();
    if(i==n-1 and j==n-1) return 1;
    int ans =0;
    grid[i][j]=2;
    if(wecango(i,j+1,grid)){
        ans+=rat(i,j+1,grid);
    }
    if(wecango(i+1,j,grid)){
        ans+=rat(i+1,j,grid);
    }
    if(wecango(i,j-1,grid)){
        ans+=rat(i,j-1,grid);
    }
    if(wecango(i-1,j,grid)){
        ans+=rat(i-1,j,grid);
    }
    grid[i][j]=1;
    return ans;
}
int main(){
    vector<vector<int> > grid={
        {1,1,1,1}
        {0,1,0,1}
        {0,1,1,1}
        {0,1,1,1}
    };
    int res = rat(0,0,grid);
    cout<<res;
}