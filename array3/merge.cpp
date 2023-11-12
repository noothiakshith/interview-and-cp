#include<iostream>
#include<vector>

using namespace std;
int main(){
    cout<<"Enter the size:";
    int n;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter elements:";
    for(int i=0;i<=n;i++){
        cin>>v[i];
    }
    vector<int>v1(n);
    cout<<"Enter second:";
    for(int i=0;i<=n;i++){
        cin>>v[i];
    }

    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<v[i]+v[j];
        }
    }

}