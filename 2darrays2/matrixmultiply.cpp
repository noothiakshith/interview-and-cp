#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the rows and columns:";
    int r1,c1,r2,c2;
    cin>>r1>>c1;
    cout<<"Enter the eleents:";
    int arr1[r1][c1];
    for(int i=0;i<=r1-1;i++){
        for(int j=0;j<=c1-1;j++){
            cin>>arr1[i][j];

        }
    }
    cin>>r2>>c2;
    cout<<"Enter the eleents:";
    int arr2[r2][c2];
    for(int i=0;i<=r2-1;i++){
        for(int j=0;j<=c2-1;j++){
            cin>>arr2[r2][c2];

        }
    }
    int res[r1][c2];
    for(int i=0;i<=r1-1;i++){
        for(int j=0;j<=c1-1;j++){
             res[i][j]=0;
            for(int k=0;k<=r1-1;k++){
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
            cout<<res[i][j]<<endl;
        }
        cout<<" ";
    }
}