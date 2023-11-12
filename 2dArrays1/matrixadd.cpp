#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the rows and columns:";
    int r,c,r1,c1;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++)
        cin>>arr[i][j];
    }
    cout<<"enter the rows and columsn for 2 matarix:";
    cin>>r1>>c1;
    int arr1[r1][c1];
    for(int i=0;i<=r1-1;i++){
        for(int j=0;j<=c1-1;j++){
            cin>>arr[i][j];
        }
    }
    int sum[r1][c1];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
           cout<< arr[i][j]+ =arr1[i][j];
        }
    }
}