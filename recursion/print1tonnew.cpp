#include<bits/stdc++.h>
using namespace std;
void  print(iint n ){
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);
}
int main(){
    cout<<"Enter the n :";
    int n;
    cin>>n;
    print(n);
}