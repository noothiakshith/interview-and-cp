#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size";
    int r; 
    cin>>r;
    int arr[r];
    for(int i=0;i<=r-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<r-1;i++){
        int flag = true;
        for(int j=0;j<r-i-1;j++){
            if(arr[j]<arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag = false;
        }
        if(flag==true){
            break;
        }
    }
    }
    for(int i=0;i<=r-1;i++){
        cout<<arr[i]<<" ";
    }
}