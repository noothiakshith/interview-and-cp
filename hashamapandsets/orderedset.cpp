#include<iostream>
#include<set>
using namespace std;
int main(){
 set<int>s;
 s.insert(5);
 s.insert(8);
 s.insert(2);
 for (auto ele:s){
    cout<<ele<< " ";
 }   
}