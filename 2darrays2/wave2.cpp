#include<iostream>
using namespace std;
int main(){
    cout<<"ENter the rows and columns:";
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=r-1;i>=0;i--){
        if(i%2==0){
        for(int j=0;j<=c-1;j++){
        cout<<arr[i][j]<<" ";
        }
    }
      else{
        for(int j=r-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
      }
    }
}