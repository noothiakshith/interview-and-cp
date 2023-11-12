#include<bits/stdc++.h>
using namespace std;
int const N =1e3;
void deletioninminheap(int minheap[],int &size){
    minheap[1]=minheap[size];
    size--;
    int curr=1;
    while(2*curr<size and 2*curr+1<=size){
        int leftchild = 2*curr;
        int rightchild = 2*curr+1;
        int minchild = leftchild;
        if(2*curr+1<size and minheap[rightchild]<minheap[leftchild]){
            minchild=rightchild;
        }
        if(minheap[minchild]>=minheap[curr]){
            return;
        }
        swap(minheap[minchild],minheap[curr]);
    }
}
int main(){
    int minheap[N]={-1,10,20,30,40,50};
    int size = 5;
    deletioninminheap(minheap,size);
    for(int i =0;i<=size;i++){
        cout<<minheap[i]<<" ";
    }
    cout<<endl;
}
