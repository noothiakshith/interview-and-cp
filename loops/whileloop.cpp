#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the integer";
    int n;
    cin>>n;
    while(n<100){
        for(int i=1;i<=100;i++){
            cout<<i;
            break;
        }
    }
}