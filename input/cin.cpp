#include<iostream>
using namespace std;
int main(){
    int x,y,temp;
    cout<<"please enter the numbers you want to swap :"<<endl;
    cin>>x>>y;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swapping:"<<x<<endl<<y<<endl;
}