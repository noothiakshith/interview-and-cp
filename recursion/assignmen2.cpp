#include<iostream>
using namespace std;
int print(int n){
    if(n==0) return 1;
    return print(n-1);
      return n;
}
int main(){
    cout<<print(10);
}