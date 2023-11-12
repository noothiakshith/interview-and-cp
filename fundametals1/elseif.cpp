#include<iostream>
using namespace std;
int main(){
    cout<<"please enter the percentage"<<endl;
    float x;
    cin>>x;
    if(x>=91&&x<=100){
        cout<<"Excellent";
    }
    else if(x>=81&&x<=90){
        cout<<"Very Good";
    }
    else if(x>=71&&x<=80){
        cout<<"Good";
    }
    else if(x>=61&&x<=70){
        cout<<"Can do better";
    }
    else if(x>=51&&x<=60){
        cout<<"Average";
    }
    else if(x>=40&&x<=50){
        cout<<"Below average";
    }
    else{
        cout<<"Fail";
    }
}