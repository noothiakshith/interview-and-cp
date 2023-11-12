#include<iostream>
using namespace std;
int const N = 1e3;
void heapify(int arr[],int size, int curr){
    while(2*curr<size){
        int leftchild = 2*curr;
        int rightchild = 2*curr+1;
        int minchild = leftchild;
        while(rightchild<size and arr[rightchild]<arr[leftchild]){
            minchild = rightchild;
        }
        if(arr[minchild]>arr[curr]){
            return;
        }
        swap(arr[minchild],arr[curr]);
        minchild=curr;
    }
}
int main(){
    int arr[N]={-1,10,20,30,40,50};
    int size = 5;
    for(int i=size/2;i>=0;i--){
        heapify(arr,size,i);
    }
    for(int i=1;i<size;i++){
        cout<<arr[i]<<"\n";
    }
}