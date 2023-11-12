// #include<bits/stdc++.h>
// using namespace std;
// int great(vector<int>v,int n,int key){
//     int count=0;
//     for(int i=0;i<=n;i++){
//         if(v[i]>=key){
//             count++;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cout<<"Enter the size:";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"PLease enter elements:";
//     for(int i=0;i<=n;i++){
//         cin>>v[i];
//     }
//     cout<<"PLeaase enter the key";
//     int key;cin>>key;
//     int result = great(v,n,key);
//     cout<<result;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     cout<<"Please enter the size:";
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Enter the elements:";
//     for(int i=0;i<=n;i++){
//         cin>>v[i];
//     }
//     int sum=0;
//     int sum1=0;
//     for(int i=0;i<=n;i++){
//         if(v[i]%2==0){
//             sum+=v[i];
//         }
//         else{
//             sum1+=v[i];
//         }
//     }
//     cout<<sum-sum1;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     cout<<"Please enter the size:";
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Enter the elements:";
//     for(int i=0;i<=n;i++){
//         cin>>v[i];
//     }
//     int even=1;
//     int odd=0;
//     for(int i=0;i<=n;i++){
//         if(v[i]%2==0){
//          even=2*v[i];
//         }
//         else if(v[i]%2!=0){
//             odd=odd+10;
//         }
//     }
//     cout<<even<<endl;
//     cout<<odd;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"PLease enter the size:";
    int n;
    cin>>n;
    cout<<"enter the elements:";
    vector<int>v(n);
    for(int i=0;i<=n;i++){
        cin>>v[i];
    }
    for(int i =0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(v[i]!=v[j]){
                cout<<i;
            }
        }
    }
}