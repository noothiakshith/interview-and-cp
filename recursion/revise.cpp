// // // #include<iostream>
// // // using namespace std;
// // // int fact(int n){
// // //     if(n==1||n==0){
// // //         return 1;
// // //     }
// // //     else{
// // //         return n*fact(n-1);
// // //     }
// // // }
// // // int main(){
// // //     cout<<fact(5)<<endl;
// // // }

// // #include<iostream>
// // using namespace std;
// // void print(int n){
// //     if(n==0){
// //         return ;
// //     }
// //     else{
// //      cout<<n<<endl;
// //         print(n-1);
// //     }
// // }
// // int main(){
// //  print(100);
// // }

// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0||n==1){
//         return n;
//     }
//     else{
//         return n+sum(n-1);
//     }
// }
// int main(){
//     cout<<sum(5);
// }
#include<iostream>
using namespace std;
int pow(int a , int b ){
    if(b==0){
        return 1;
    }
    else{
        return a*pow(a,b-1);
    }
}
int main(){
    cout<<pow(2,2);
}