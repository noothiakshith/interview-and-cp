#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Please enter x,y,z :"<<endl;
    cin>>x>>y>>z;
    if(x>y&&x>z){
        cout<<"The greatest number is x "<<endl;
    }
    else if(y>x&&y>z){
        cout<<"The gretest number is y"<<endl;
    }
    else{
        cout<<"The greatest number is z";
    }
}