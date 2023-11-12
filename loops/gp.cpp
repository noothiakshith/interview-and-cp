#include<iostream>
using namespace std;
int main(){
    cout<<"please enter the range";
    int x;
    cin>>x;
    int a=2;
    for(int i=2;i<=x;i++){
        cout<<a<<endl;
        a=a*2;
    }
}