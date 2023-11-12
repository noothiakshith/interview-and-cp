#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&a,int n ){
    for(int i=0;i<=n;i++){
        cout<<a[i]<<" ";
    }
}
void change(vector<int>&b,int n){
    b[0]=12;
}
int main(){
    int n;
    cout<<"Please enter the size of the array:";
    cin>>n;
    vector<int>v(n);
    cout<<"Please enter the elements of the size :";
    for(int i=0;i<=n;i++){
        cin>>v[i];
    }
    cout<<endl;
    display(v,n);
    change(v,n);
    cout<<endl;
    display(v,n);
}