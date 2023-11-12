#include<iostream>
using namespace std;
class vechile{
    public:
    int tyre;
    int engine;
    int speed;
    int lights;
    vechile(int tyre , int engine, int speed){
        this->tyre=tyre;
        this->engine=engine;
        this->speed=speed;
    }
};
class A{
    public:
    int a_ka_public;
     void show(){
        cout<<"Meh to a ka funciton";
    }
};
class B:public A{
    public:
    int b_ka_public;
    void show(){
        cout<<"changed";
    }
};
int main(){
    B b;
    show();

}