
#include<iostream>
int startringle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            std::cout<<"*";
        }
       std:: cout<<std::endl;
    }
    return 0;
}
int main(){
    std::cout<<"please enter integer :";
    int n;
    std::cin>>n;
    int result = startringle(n);
    std::cout<<result;
}