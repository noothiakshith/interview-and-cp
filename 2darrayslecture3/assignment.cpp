#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Please enter r and c:";
    cin>>r>>c;
    int arr[r][c];
    cout<<"enter the elements:";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int res[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==0){
                for(int t =0;t<r;t++) res[t][j]=0;
                for(int s =0;s<c;s++) res[i][s]=0;
            }
            else{
                if(res[i][j]==0) continue;
                else res[i][j]=arr[i][j];
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }
}