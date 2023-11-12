#include<iostream>
using namespace std;
int const N = 1e3;
void heapify(int arr[],int &size,int curr){
    while(2*curr<=size){
        int leftchild = 2*curr;
        int rightchild = 2*curr+1;
        int minchild = leftchild;
        if(rightchild<=size and arr[rightchild]>arr[leftchild]){
            minchild=rightchild;
        }
        if(arr[minchild]<=arr[curr]){
            return;
        }
        else{
            swap(arr[minchild],arr[curr]);
            curr=minchild;
        }
    }
}
int main(){
    int arr[N]={-1,60,10,80,50,5,20,70};
    int size =7;
    for(int i=size/2;i>0;i--){
        // i->is the parent node in this
        heapify(arr,size,i);
    }
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}