#include<iostream>
using namespace std;
int pow(int x , int y ){
    if(y==0) return 1;
    else return x*pow(x,y-1);
}
int main(){
    cout<<"Enter a and b :";
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b);
}