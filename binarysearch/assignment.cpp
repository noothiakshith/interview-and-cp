// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     cout<<"enter the size:";
// // //     int n;
// // //     cin>>n;
// // //     int arr[n];
// // //     cout<<"enter the elements:";
// // //     for(int i=0;i<=n-1;i++){
// // //         cin>>arr[i];
// // //     }
// // //     cout<<"enter the target:";
// // //     int target;
// // //     cin>>target;
// // //     int low = 0;
// // //     int high = n-1;
// // //     while(low<=high){
// // //         int mid = low+(high-low)/2;
// // //         if(arr[mid]==target){
// // //             if(arr[mid+1]==target){
// // //                 low =mid+1;
// // //             }
// // //             else{
// // //                 cout<<mid;
// // //                 break;
// // //             }
// // //         }
// // //         else if(arr[mid]<target){
// // //             low =mid+1;
// // //         }
// // //         else{
// // //             high = mid-1;
// // //         }
// // //     }
// // // }

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     cout<<"enter the size:";
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     cout<<"enter the elements:";
// //     for(int i=0;i<=n-1;i++){
// //         cin>>arr[i];
// //     }
// //     cout<<"enter the target:"; 
// //     int target;
// //     cin>>target;
    
// //     int low = 0;
// //     int high = n-1;
// //     while(low<=high){
// //         int mid = low+(high-low)/2;
// //         if(arr[mid]==arr[mid-1]|| arr[mid]==arr[mid+1]){
// //             cout<<arr[mid]<<endl;
// //             break;
// //         }
// //         else if(arr[mid]<arr[mid-1]){
// //             low = mid+1;
// //         }
// //         else{
// //             high =mid-1;
// //         }
// //     }
// // }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the size:";
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements:";
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int max =0;
//     int index =0;
//     int count =0;
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]==1){
//             count++;
//         }
//         if(count>max){
//             max = count;
//             index = i;
//         }
//         cout<<max<<index;
//     }
// }
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
//     int count =0;
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]==1){
//             count++;
//         }
//     }
//     cout<<count;
// 

// optimized binary search 
int low = 0;
int high = n-1;
while(low<=high){
    int mid = low+(high-low)/2;
    if(arar[mid]==1){
        if(arr[mid-1]!=1){
            high = mid-1;
        }
        else{
            cout<<mid;
        }
    }
}
}
