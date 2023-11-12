#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the row and columns:";
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<=c-1;j++){
        if(j%2==0){
        for(int i=0;i<=r-1;i++){
            cout<<arr[i][j]<<" ";
        }
        }
        else{
            for(int i=r-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}