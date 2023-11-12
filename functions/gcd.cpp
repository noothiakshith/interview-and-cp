#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    int hcf=1;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0&&b%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main(){
    cout<<"Please enter the 2 numbers :";
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y);
}