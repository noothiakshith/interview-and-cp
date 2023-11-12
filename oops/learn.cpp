#include<iostream>
using namespace std;
class A{
    public:
    int a_ka_public;
     void show(){
        cout<<"Meh to a ka funciton";
    }
};
class B : public A{
    public:
    int b_ka_public;
    void show(){
        cout<<"changed";
    }
};
int main(){
    B own;
    own.show();
    cout<<endl;
    own.A::show();

}