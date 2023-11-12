#include<iostream>
using namespace std;
int main(){
    int input,lastdigit;
    cout<<"Please enter the number :";
    cin>>input;
    int sum=0;
    while(input>0){
     lastdigit= input%10;
      sum=sum+lastdigit;
      input=input/10;
    }
    cout<<sum;
}