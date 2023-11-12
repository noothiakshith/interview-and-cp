#include<iostream>
using namespace std;
void printsub(string ans, string original){
    if(original=="") {
        cout<<ans<<endl;
        return;
    }
    char  ch = original[0];
    printsub(ans+ch,original.substr(1));
    printsub(ans,original.substr(1));
}
int main(){
    string str = "abcd";
    printsub("",str);
}