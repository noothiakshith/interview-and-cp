#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Please enter the size:";
    int n;
    cin>>n;
    cout<<"Please enter the elements:";
    vector<int>v(n);
    for(int i=0;i<=n;i++){
        cin>>v[i];
    }
    cout<<"ENter the sum element:";
    int key;cin>>key;
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(v[i]+v[j]==key){
                cout<<"("<<i<<","<<j<<")";
            }

        }
    }
}