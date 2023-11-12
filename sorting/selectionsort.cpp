#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size:";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        int min = INT_MAX;
        int midx = -1;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<min){
                min=arr[i];
                midx=j; 
            }

        }
        swap(arr[i],arr[midx]);
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i];
    }
}