#include<iostream>
using namespace std;
int const N =1e3;
void insert(int arr[],int &size,int val){
    size++;
    arr[size]=val;
    int curr = size;
    while(curr/2 > 0 and arr[curr/2]>arr[curr]){
        swap(arr[curr],arr[curr/2]);
        curr=curr/2;
    }
}
int main(){
    int minheap[N]={-1,10,20,30,40,50};
    int size = 5;
    int val = 2;
    insert(minheap,size,val);
    for(int i=0;i<size;i++){
        cout<<minheap[i]<<"\n";
    }
}