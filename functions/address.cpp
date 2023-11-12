#include<iostream>
using namespace std;
int address(int x , int y){
    cout<<&x<<endl;
    cout<<&y<<endl;
    return 0;
}
int main(){
    int x, y;
   cout<< address(x,y);
}