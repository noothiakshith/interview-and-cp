#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,long>directory;

    directory.insert(make_pair("Akshith",6281651078));
    directory.insert(make_pair("Sathwik",9885228787));
    directory.insert(make_pair("Sowjanya",9052275287));
    directory.insert(make_pair("Ramana",8328100852));
    cout<<directory.size();
    for(auto element:directory){
        cout<<"Name ->"<<element.first<<endl;
        cout<<"Number->"<<element.second<<endl;
    }
}