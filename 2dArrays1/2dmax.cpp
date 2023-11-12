// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     cout<<"enter the rows and columns";
//     int r,c;
//     cin>>r>>c;
//     int arr[r][c];
//     cout<<"enter the elements";
//     int min =arr[0][0];
//     for(int i=0;i<=r-1;i++){
//         for(int j=0;j<=c-1;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<=r-1;i++){
//         for(int j=0;j<=c-1;j++){
//             if(min<arr[i][j]){
//                 min=arr[i][j];
//             }
//         }
//     }
//     cout<<min;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the rows and columns";
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    cout<<"enter the elements";
    int min =INT_MAX;
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
cout<<min;
}