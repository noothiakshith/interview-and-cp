#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =3;
    int prevsum=0;
    for(int i=0;i<n;i++){
        prevsum+=arr[i];
    }
    int maxsum=INT_MIN;
    int i =0;
    int j=k;
    while(j<n){
        prevsum=prevsum+arr[j]-arr[i-1];
        if(maxsum<prevsum){
            maxsum=prevsum;
            i++;
            j++;
        }
    }
    cout<<maxsum;
}