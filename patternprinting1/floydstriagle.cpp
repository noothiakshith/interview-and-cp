// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     cout<<"Please enter the rows :";
// //     int n;
// //     cin>>n;
// //     for(int i=1;i<=n;i++){
// //         for(int j=1;j<=i;j++){
// //             cout<<j;
// //         }
// //         cout<<endl;
// //     }
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     cout<<"Please enter the rows:";
//     int r;
//     cin>>r;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=2*i-1;j+=2){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"please enter the rows :";
    int r;
    cin>>r;
    int a=0;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            a++;
            cout<<a;
        }
        cout<<endl;
    }
}