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
    for(int i=0;i<=r1-1;i++){
      if(i%2==0){
        for(int j=0;j<=r1-1;j++){
            cout<<arr1[i][j]<<" ";
        }
      }
      else{
        for(int j=r1-1;j>=0;j--){
            cout<<arr1[i][j]<<" ";
        }
      }
}
}