#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<=5;i++){
        cout<<a[i]<<endl;
    }
    return;
}
int main(){
    int arr[]={1,2,3,4,5};
    display(arr);
}