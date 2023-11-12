#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Please enter the rows:";
    int n;
    cin>>n;
    int a=0;
    for(int i=1;i<=n;i++){
        for(int j =1;j<=i;j++){
         a++;
         cout<<a;
        }
        cout<<endl;
    }
}