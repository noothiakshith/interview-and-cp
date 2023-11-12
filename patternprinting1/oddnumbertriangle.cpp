#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Please enter the rows:";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=2*i-1;j+=2){
            cout<<j;
        }
        cout<<endl;
    }
}