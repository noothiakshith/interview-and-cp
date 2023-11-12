#include<iostream>
using namespace std;
int sum (int a , int b ){
    if(a==1){
        return a;
    }
    else{
        return a+sum(a-1);
    }
}
int main(){
    int a = 1;
    int b = 5;
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            sum(a,b);
        }
    }
}