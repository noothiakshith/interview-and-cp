#include<bits/stdc++.h>
using namespace std;
int const N =1e3;
void insertmaxheap(int maxheap[],int &size,int value){
    size++;
    maxheap[size]=value;
    int curr = size;

    while(curr/2 > 0 && maxheap[curr/2]  < maxheap[curr]){
        swap(maxheap[curr/2],maxheap[curr]);
        curr=curr/2;
    }
}
int main(){
    int maxheap[N]={-1,60,50,40,30,20,10,5};
    int size = 7;
    int value = 100;
    insertmaxheap(maxheap,size,value);
    for(int i =0;i<=size;i++){
        cout<<maxheap[i]<<" ";
    }
    cout<<endl;
}
