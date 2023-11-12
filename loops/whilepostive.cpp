#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the range";
    int n;
    cin>>n;
    int a =3;
    for(int i=n;i>0;i--){
        cout<<a<<endl;
        a=a+3;
    }
}