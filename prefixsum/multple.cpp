#include<iostream>
using namespace std;
int main(){
    int nums[]={-2,0,3,-5,2,-1};
    int n = sizeof(nums)/sizeof(nums[0]);
    for(int i =1;i<n;i++){
        nums[i]+=nums[i-1];
    }
    int ans[n];
    for(int  i=1;i<n;i++){
        ans = nums[5]-nums[2-1];
    }
    cout<<ans;
}