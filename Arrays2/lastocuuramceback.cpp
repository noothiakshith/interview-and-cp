#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Please enter the size :";
    int n;
    cin>>n;
    vector<int>v(n);
    cout<<"Please enter the elements:";
    for(int i=0;i<=n;i++){
        cin>>v[i];
    }
    cout<<"please enter the key element";
    int key; cin>>key;
    int index=-1;
    for(int i=n-1;i>=1;i--){
        if(v[i]==key){
            index=i;
            break;
        }
    }
    cout<<index;

}