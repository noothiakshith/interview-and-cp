#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size and target:";
    int size,target;
    cin>>size>>target;
    int arr[size];
    cout<<"Enter the elements:";
    for(int i=0;i<size-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=size-1;i++){
        int low =0;
        int high =size-1;
        int mid = (low+high)/2;
        if(arr[mid]==target){
            cout<<"found";
        }
        else if(arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
}