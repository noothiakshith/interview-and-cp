#include<iostream>
using namespace std;
int main(){
    int arr[13]={1,2,2,3,3,3,3,3,4,4,5,8,9};
    int x = 13;
    int target = 2;

    int low = 0;
    int high = x-1;
    int mid = low+(high-low)/2;
    int flag = true;
    while(low<=high){
        if(arr[mid]==target){
            if(arr[mid-1]!=target){
                flag = true;
                cout<<mid;
                break;
            }
            else{
                high = mid-1;
            }

        }
        else if (arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    if(flag==false){
        return -1;
    }
}
