// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter the elements";
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter target";
//     int target;
//     cin>>target;
//     int low =0;
//     int high = 5;
//     while(low<=high){
//         int mid = low+(high-low)/2;
//         if(arr[mid]==target){
//             cout<<mid;
//             break;
//         }
//         else if(arr[mid]!=target){
//             cout<<"Not found";
//             break;
//         }
//         else if(arr[mid]>target){
//            low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
// }
#include<iostream>
using namespace std;
int main(){
int a[] = {1,2,4,7,10,12,15,18};
int lo = 0 , hi = 1;
int tgt = 18;
while(a[hi] < tgt){
lo = hi;
hi *= 2;
}
cout<<hi<<endl;
bool flag = false;
while(lo <= hi){
int mid = lo + (hi - lo)/2;
if(a[mid] ==tgt){
flag = true;
break;
}
else if(a[mid] > tgt){
hi = mid - 1;
}
}
}
