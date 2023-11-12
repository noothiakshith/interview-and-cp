#include<iostream>
using namespace std;
class book{
    private:
    int page;
    int price;
    char isstring;
    public:
    int countbooks(int page){
    if(price<page){
        return 1;
    }
    else{
        return 0;
    }
    }
    bool isbooks(char book){
        if(book==isstring){
            return true;
        }
        else{
            return false;
        }
    }



};