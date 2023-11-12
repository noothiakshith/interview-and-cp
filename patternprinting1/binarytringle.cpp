#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Please enter the rows:";
    int rows;
    cin>>rows;
    int a=1;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<a;
        }
    }
}