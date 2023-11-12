#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the rows and columns:";
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<j;
        }
        cout<<endl;
    }
}