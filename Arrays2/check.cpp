#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Please enter the size:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(arr[i]!=arr[j]){
                count++;
            }
        }
    }
    if(count==0){
        cout<<"NOt unique";
    }
}