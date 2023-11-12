#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&a,int n){
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    cout<<"Enter the size";
    int n;
    cin>>n;
    vector<int>v1(n);
    cout<<"Enter the elements:";
    for(int i=0;i<=n-1;i++){
        cin>>v1[i];
    }
   
   vector<int>v2(n);
   for(int i=0;i<<n-1;i++){
    v2[i]=v1[v1.size()-1-i
    ];
   }
   display(v2,n);
}