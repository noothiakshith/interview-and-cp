#include<iostream>
using namespace std;
int main(){
    cout<<"please eneter the number";
    int input;
    cin>>input;
    bool flag = true;
   for(int i=2;i<input;i++){
    if(input%i==0){
      flag = false;
    }
   }
   if(input==1){
    cout<<"THe given number is neithe rpriem not composite";
    
   }
   if(flag==false){
    cout<<"The given number is not  prime";
   }
   else{
    cout<<"THe given number is  prime";
   }
}