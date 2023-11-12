#include<iostream>
using namespace std;
int main(){
    cout<<"enter the rows and columns";
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    cout<<"enter the elements";
    for(int i=0;i<=r-1;i++){
        
        for(int j=0;j<=c-1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}