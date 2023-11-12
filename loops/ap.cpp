#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the range";
    int n;
    cin>>n;
    int a=4;
    for(int i =1u;i<=n;i++){
        cout<<a<<endl;
        a= a+3;
    }
}