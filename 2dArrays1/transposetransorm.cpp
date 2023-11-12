#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Please enter the rows and columns:";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter the elements:";
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Transpose of the matrix:"<<endl;
    for(int i=0;i<=r-1;i++){
        for(int j=i+1;j<=c-1;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}