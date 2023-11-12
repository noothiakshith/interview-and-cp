// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int r,c;
// //     cout<<"Enter r and c ";
// //     cin>>r>>c;
// //     int arr[r][c];
// //     cout<<"Enter elements:";
// //     for(int i=0;i<r;i++){
// //         for(int j=0;j<c;j++){
// //             cin>>arr[i][j];
// //         }
// //     }
// //     for(int i=0;i<r;i++){
// //       for(int j=0;j<c;j++){
// //         if(i==j || i+j==r-1){
// //             cout<<arr[i][j]<<" ";
// //         }
// //         else{
// //             cout<<" ";
// //         }
// //         cout<<endl;
// //       }
// //     }
// // }

// #include<iostream>
// using namespace std;
// int main(){
//     int r,c;
//     cout<<"Enter r and c ";
//     cin>>r>>c;
//     int arr[r][c];
//     cout<<"Enter elements:";
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<r;i++){
//         for(int j=i+1;j<c;j++){
//             if(arr[i]==arr[j]){
//                 cout<<arr[i][j];
//             }
//             else{
//                 int temp = arr[i][j];
//                 arr[i][j]=arr[j][i];
//                 arr[j][i]=temp;
//             }

//         }
//         for(int k=0;k<r;k++){
//         i=0;
//         int j=r-1;
//         while(i<=j){
//             int temp = arr[k][i];
//             arr[k][i]=arr[k][j];
//             arr[k][j]=temp;
//             i++;
//             j--;
//         }
//         }
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     }
// }

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter r and c";
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter the elements";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<r;j++){
        for(int i=0;i<r;i++){
            cout<<arr[i][j];
        }
}
}