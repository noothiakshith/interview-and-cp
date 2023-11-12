#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    for(int i=0;i<=3;i++){
        if(arr[i]+arr[i-1]>arr[i]+arr[i-2]){
            cout<<arr[i]+arr[i-1];
        }
        else{
            cout<<arr[i]+arr[i-2];
        }
    }
}