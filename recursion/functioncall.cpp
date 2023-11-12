#include<bits/stdc++.h>
using namespace std;
int fun(int n ){
    if(n==0||n==1) return n;
    else{
        return n*fun(n-1);
    }
}
int main(){
   cout<<"enter n ";
   int n;
   cin>>n;
   cout<<fun(n);
}