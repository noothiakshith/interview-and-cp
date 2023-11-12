#include<iostream>
using namespace std;
int const N = 1e3;
void heapify(int arr[],int&size,int curr){
    while(2*curr<=size){
        int leftchild=2*curr;
        int rightchild=2*curr+1;
        int maxchild=leftchild;
        if(rightchild<=size and arr[maxchild]>arr[rightchild]){
            maxchild=rightchild;
        }
        if(arr[maxchild]<=arr[curr]){
            return;
        }
        else{
            swap(arr[maxchild],arr[curr]);
            curr = maxchild;
        }
    }
}
void remove(int arr[],int&size){
    swap(arr[1],arr[size]);
    size--;
    heapify(arr,size,1);
}
void heapsort(int arr[] , int size){
    // step->1 -> heapify all the elements that present
    for(int i = size/2;i>0;i--){
        heapify(arr,size,i);
    }
    // step->2->keep deleting the elements
    while(size>0){
        remove(arr,size);
    }

}
int main(){
    int n = 7;
    int arr[N]={-1,60,10,80,50,5,20,70};
    heapsort(arr,n);
    for(int i =0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}