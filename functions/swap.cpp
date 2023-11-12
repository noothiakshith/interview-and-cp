#include<iostream>
using namespace std;
int swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
    return;

}
int main(){
    cout<<"Please enter 2 numbers:";
    int a,b;
    cin>>a>>b;
    cout<<swap(a,b);
}