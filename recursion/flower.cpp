#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"PLease enter the size:";
    int n,size;
    cin>>n;
    cout<<"enter the elements:";
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    size = n/3;
    int count =0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
    }
    cout<<count;
}