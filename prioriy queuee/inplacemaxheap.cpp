#include<iostream>
#include<vector>
using namespace std;
class heap{
    private:
    vector<int>hp;
    public:
    void display(){
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
    }
    void push(int element){
        hp.push_back(element);
        upheap(hp.size()-1);
    }
    void upheap(int ci){
        while(ci>0){ // upto to the top of the element
            int pi = (ci-1)/2; // to find the parent element
            if(hp[pi]<hp[ci]){
                swap(hp[pi],hp[ci]);
                ci=pi;
            }
            else{
                break;
            }
        }
    }
    maxhe

};
int main(){
    heap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(50);
    hp.push(100);
    hp.display();
}