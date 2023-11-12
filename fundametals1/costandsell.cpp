#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the cost and selling price";
    int cos,sel;
    cin>>cos>>sel;
    if(sel>cos){
        cout<<"You made a profit of :"<<sel-cos<<endl;
    }
    if(sel<cos){
        cout<<"you made a loss :"<<cos-sel<<endl;
    }
}