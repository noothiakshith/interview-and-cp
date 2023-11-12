#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Please enter the number";
    cin>>x;
    if(x>=100&&x<=999){
        cout<<"The given number is 3 digit number";
    }
    else{
        cout<<"The given number is not a 3 digit numbere";
    }
}