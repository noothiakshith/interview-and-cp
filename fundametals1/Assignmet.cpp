// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     cout<<"Please enter the length and breadth";
// // // //     int l,b;
// // // //     cin>>l>>b;
// // // //     int area,perimeter;
// // // //     area=l*b;
// // // //     perimeter=2*(l+b);
// // // //     if(area>perimeter){
// // // //         cout<<"The area is greater than perimeter";
// // // //     }
// // // //     else{
// // // //         cout<<"The area is not greater than perimeter";
// // // //     }
// // // // }

// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     cout<<"PLease enter the marks "<<endl;
// // //     int x,y,z;
// // //     cin>>x>>y>>z;
// // //     if(x<y&&x<<z){
// // //         cout<<"x is the least";
// // //     }
// // //     else if(y<z&&y<x){
// // //         cout<<"y is the least";
// // //     }
// // //     else{
// // //         cout<<"z is the least";
// // //     }
// // // }

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     char ch;
// //     cout<<"Please enter the character"<<endl;
// //     cin>>ch;
// //     if(((int)ch>=65&&(int)ch<=91)|| ((int)ch>=97&&(int)ch<=123)){
// //         cout<<"The given character is alphabet";
// //     }
// //     else if((int)ch>=48&&(int)ch<=57){
// //         cout<<"The given character is number";
// //     }
// //     else{
// //         cout<<"the given character is special character";
// //     }
// // }

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y,z;
//     cout<<"Please enter the three sides";
//     cin>>x>>y>>z;
//     if(x==y||x==z){
//         cout<<"The given triangle is isocilecus";
//     }
//     else if(y==x||y==z){
//         cout<<"The given triangle is isoucles";
//     }
//     else if(z==x||z==y){
//         cout<<"The given triangle is isoucs s";
//     }
//     else{
//         cout<<"The given triangle is not";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x ;
//     cout<<"please enter the year";
//     cin>>x;
//     if(x%4==0){
//         cout<<"The given year is leap year";
//     }
//     else{
//         cout<<"The given year is not a leap year";
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Please enter the x and y ";
    cin>>x>>y;
    if(x>0&&y>0){
      cout<<"The given points are in x-axis";
    }
     if(x==0&&y==0){
        cout<<"The given points are in origin";
    }
    if(x<0&&y<0){
        cout<<"THe given points are in y - axis";
    }
}