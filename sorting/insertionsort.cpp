#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the size:";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        int j=i;
            while(j>=1){
                if(arr[j]>=arr[j-1]){
                    break;
                }
                else{
                    swap(arr[j],arr[j-1]);
                    j--;
                }
            }
        }
    
    for(int i=0;i<=n-1;i++){
        cout<<arr[i];

    }
}