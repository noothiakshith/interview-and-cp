// // #include<iostream>
// // using namespace std;
// // int main(){
// //     cout<<"enter the roes and columns:";
// //     int r,c;
// //     cin>>r>>c;
// //     int arr[r][c];
// //     cout<<"Enter the elements:";
// //     for(int i=0;i<=r-1;i++){
// //         for(int j=0;j<=c-1;j++){
// //             cin>>arr[i][j];
// //         }
// //     }
// //     for(int i=0;i<=r-1;i++){
// //         for(int j=0;j<=c-1;j++){
// //             arr[i][j]=10;
// //             cout<<arr[i][j]<< " ";
// //         }
// //         cout<<endl;
// //     }
// // }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter the roes and columns:";
//     int r,c;
//     cin>>r>>c;
//     int arr[r][c];
//     cout<<"Enter the elements:";
//     for(int i=0;i<=r-1;i++){
//         for(int j=0;j<=c-1;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int sum=0;
//     int l1,r1,l2,r2;
//     cout<<"Enter the l1 and r1:";
//     cin>>l1>>r1;
//     cout<<"ENter the l2 and r2:";
//     cin>>l2>>r2;
//     for(int i=min(l1,l2);i<=max(l1,l2);i++){
//         for(int j=min(r1,r2);j<=max(r1,r2);j++){
//             sum+=arr[i][j];
//         }
//     }
//     cout<<sum;
// }

#include<iostream>
using namespace std;
int main(){
    cout<<"enter the roes and columns:";
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter the elements:";
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            if(i==r/2||j==r/2){
                cout<<arr[i][j]<<"";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    }