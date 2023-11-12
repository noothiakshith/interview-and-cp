#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int x=1;
    for(int i=1;i<=n;i++){
        x*=i;
    }
    return x;
}
int main(){
    cout<<"Please enter the number :";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fact(i);
        cout<<endl;
    }
    cout<<endl;
}