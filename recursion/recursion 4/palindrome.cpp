#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string s ){
    int i =0;
    int j = s.length()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    string s = "lawdeballlawde";
    cout<<ispalindrome(s);
}