#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Linkedlist{
    public:
    Node*head;
    Node*tail;
    int size;
    Linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->next;
        }
    }
};
int main(){
    
}