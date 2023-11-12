#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter the size:";
cin>>n;
vector<int>v(n);
cout<<"Enter elements:";
for(int i=0;i<=n-1;i++){
    cin>>v[i];
}
int m;
cout<<"Enter the size:";
cin>>m;
cout<<"Enter elements:";
vector<int>v1(m);
for(int i=0;i<=n-1;i++){
    cin>>v1[i];
}
vector<int>v2(m+n);
int i=0;
int j=0;
int k=0;
while(i<=j&&j<=k){
    if(v[i]<v1[i]){
        v2[i]=v[i];
        i++;
    }
    else{
        v2[i]=v1[i];
    }
    k++;
}
for(int i=0;i<=n-1;i++){
    cout<<v2[i];
}
}