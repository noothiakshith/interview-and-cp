#include<bits/stdc++.h>
using namespace std;
int combination(int n , int r){
    int nfact =1;
    for(int i=2;i<=n;i++){
        nfact *=i;
    }
    int rfact =1;
    for(int i=2;i<=r;i++){
        rfact *=i;
    }
    int nrfact=1;
    for(int i=2;i<=n-r;i++){
        nrfact *=i;
    }
    int result = nfact/(rfact*nrfact);
    return result;
}
int fact(int x){
    for(int i=2;i<=x;i++){
    x*=i;
    }
    return 0;
}
int permutaion(int n,int r){
    int permuation = fact(n)/(fact(n)-fact(r));
    return permuation;
}
int main(){
    cout<<"PLeae enter n and r:";
    int n,r;
    cin>>n>>r;
    cout<<permutaion(n,r);

}