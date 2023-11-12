#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the r and c:";
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter the elements:";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int j=0;j<c;j++){
        for(int i=0;i<r/2;i++){
            int temp = arr[i][j];
            arr[i][j]=arr[r-i-1][j];
            arr[r-i-1][j]=temp;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}