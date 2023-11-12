#include<iostream>
using namespace std;
void toh(int n , char A, char B , char C ){
    if(n==0) return;
    toh(n-1,A,C,B);
    cout<<A<<"->"<<B<<endl;
    toh(n-1,B,A,C);
}
int main(){
    int n = 3;
    toh(n,'A','B','C');
}