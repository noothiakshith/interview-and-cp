#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m=7;
    vector< vector <int> > v;
    // create columns
    for(int i=0;i<=m-1;i++){
        vector<int>a(i);
        v.push_back(a);
    }
    // generate
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<i;j++){
            if(j==i||j==0){
                v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }

    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}