#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Please enter the rows :";
    int rows;
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(i==j&&j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}