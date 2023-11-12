// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     cout<<"Enter rows :";
// //     int n;
// //     cin>>n;
// //     for(int i=1;i<=n;i++){
// //         for(int j =1;j<=n;j++){
// //             cout<<i;
// //         }
// //         cout<<endl;
// //     }
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     cout<<"Enter rows :";
// //     int n;
// //      cin>>n;
// //      for(int i=1;i<=n;i++){
// //         for(int j=1;j<=i;j++){
// //             cout<<j;
// //         }
// //         cout<<endl;
// //      }
// // }
// // #include<bits/stdc++.h>
// //      using namespace std;
// //      int main(){
// //      cout<<"Enter rows :";
// //      int n;
// //      cin>>n;
// //      for(int i=1;i<=n;i++){
// //         for(int j=1;j<=n-i+1;j++){
// //             cout<<j;
// //         }
// //         cout<<endl;
// //      }
// // //      }
// // #include<bits/stdc++.h>
// //    using namespace std;
// //      int main(){
// //      cout<<"Enter rows :";
// //        int n;
// //        cin>>n;
// //        for(int i=1;i<=n;i++){
// //         for(int j=1;j<=i;j++){
// //             cout<<(char)(j+64);
// //         }
// //         cout<<endl;
// //        }
// //      }
// // #include<bits/stdc++.h>
// //    using namespace std;
// //      int main(){
// //      cout<<"Enter rows :";
// //        int n;
// //        cin>>n;
// //        for(int i=1;i<=n;i++){
// //         for(int j=1;j<=i;j++){
// //             cout<<j;
// //         }
// //         cout<<endl;
// //        }
// //      }
// // #include<bits/stdc++.h>
// //    using namespace std;
// //      int main(){
// //      cout<<"Enter rows :";
// //        int n;
// //        cin>>n;
// //        for(int i=1;i<=n;i++){
// //         for(int j=1;j<=i;j++){
// //             if(i%2!=0){
// //                 cout<<j;
// //             }
// //             else{
// //                 cout<<(char)(j+64);
// //             }
// //         }
// //         cout<<endl;
// //        }
// //      }
// // #include<bits/stdc++.h>
// //    using namespace std;
// //      int main(){
// //      cout<<"Enter rows :";
// //        int n;
// //        cin>>n;
// //        for(int i=1;i<=n;i++){
// //         for(int j=1;j<=n;j++){
// //             cout<<"*";
// //         }
// //         cout<<endl;
// //        }
// //      }
// // #include<bits/stdc++.h>
// //    using namespace std;
// //      int main(){
// //      cout<<"Enter rows :";
// //        int n;
// //        cin>>n;
// //        for(int i=1;i<=n;i++){
// //         for(int j=1;j<=i;j++){
// //           cout<<"*";
// //        }
// //        cout<<endl;
// //      }

// //      for(int i=1;i<n;i++){
// //         for(int j=1;j<n-i+1;j++){
// //            cout<<"*";
// //         }
// //         cout<<endl;
// //      }
// //      }
// #include<bits/stdc++.h>
//    using namespace std;
//      int main(){
//      cout<<"Enter rows :";
//        int n;
//        cin>>n;
//        for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=i+1;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//        }
//        }
#include <iostream>
using namespace std;
int main() {
int m, n;
cin >> m >> n;
for(int i = 0; i < m; ++i) {
for(int j = 0; j < n; ++j) {
if(i == 0 || j == 0 || i == m-1 || j == n-1) {
cout << "* ";
} else {
cout << " ";
}
}
cout << endl;
}
return 0;
}