#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Please enter the number:"<<endl;
    cin>>x;
    if(x%3==0||x%5==0){
        cout<<x<<": is divisible by 3 and 5 ";
    }
    else{
        cout<<x<<": is not divisible by 3 and 5";
    }
}