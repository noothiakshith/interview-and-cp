#include<iostream>
using namespace std;
int sum(int n){
    if(n==0||n==1) return 1;
    else return n+sum(n-1);
}
int main(){
    cout<<"enter the n value:";
    int x;
    cin>>x;
    cout<<sum(x)<<endl;
}