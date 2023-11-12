// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] ={1,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         for(int k = i;k<n;k++){
//             for(int j =i;j<=k;j++){
//                 cout<<arr[j];
//             }
//             cout<<endl;
//         }
//     }
// }
#include<iostream>
#include<vector>
using namespace std;
void solve(int arr[], int n ,vector<int>v,int index){
    if(arr>=n){
        for(int i=0;i<n;i++){
            cout<<v[i];
        }
        return;
    }
    solve(arr,n,v,index+1);
    v.push_back(arr[index]);
    solve(arr,n,v,index+1);
}
int main(){
    int arr[] ={1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = 0;
    vector<int>v;
    max(arr,n,index,v);
}