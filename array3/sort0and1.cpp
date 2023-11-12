#include<bits/stdc++.h>
using namespace std;
void vsort1(vector<int>&a,int  n ){
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]<0) i++;
        if(a[j]>0) j--;
        if(a[i]>0&&a[j]<0){
            int temp = a[j];
            a[j]=a[i];
            a[i]=temp;
            i++;
            j--;
        }
    }
return ;
}
int main(){
    cout<<"enter size:";
    int n;
    cin>>n;
    cout<<"Enter elements:";
    vector<int>v(n);
    for(int i=0;i<=n-1;i++){
        cin>>v[i];
    }
    vsort1(v,n);
    for(int i=0;i<=n-1;i++){
        cout<<v[i]<<endl;
    }
}