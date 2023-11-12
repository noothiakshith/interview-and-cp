#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the rows and columns:";
    cin>>r>>c;
    int arr[r][c];
    int right=r-1;
    int down=r-1;
    int left=0;
    int top = 0;
    while(top<=down&&left<=right){
        // right
        if(dir==0){
            for(int i=left;i<=right;i++){
                cout<<arr[top][i];
                top++;
            }
        }
        elseif(dir==1){
            
        }
    }

}