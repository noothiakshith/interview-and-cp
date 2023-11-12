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
    cout<<"After rotation of the matrix:"<<endl;
    for(int i=0;i<=r-1;i++){
        for(int j=i+1;j<=c-1;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int k=0;k<=r-1;k++){
        int i=0;
        int j=3;
        while(i<j){
            int temp =arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=temp;
            i++;
            j--;
        
    }
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=r-1;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

}
}