#include<iostream>
using namespace std;
int main(){
    int nums[]={1,2,3};
    int n = sizeof(nums)/sizeof(nums[0]);
    for(int i=1;i<n;i++){
        nums[i]+=nums[i-1];
    }
    for(int i=1;i<n;i++){
        if(2*nums[i]==nums[n-2]){
            cout<<i+1;
        }
        else{
            cout<<-1;
            break;
        }
    }`
}