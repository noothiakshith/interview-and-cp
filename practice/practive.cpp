#include<iostream>
using namespace std;
int main(){
    cout<<"enter the size:";
    int r;
    int sum =0;
    cin>>r;
    int arr[r];
    for(int i=0;i<r;i++){
        cin>>arr[i];
    }
    for(int i=0;i<r;i++){
       sum+=arr[i];
    }
    int ap = r*(r-1)/2;
    int res = sum-ap;
    cout<<res;
}