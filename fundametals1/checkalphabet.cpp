#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Please enter the char:"<<endl;
    cin>>ch;
    if((int)ch>=65&&(int)ch<=91){
        cout<<"The given char is alphabet"<<endl;
    }
    else if ((int )ch>=97&&(int)ch<=124){
        cout<<"The given char is alphabet"<<endl;
    }
    else{
        cout<<"The given char is not a alphabet"<<endl;
    }
}