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
    void insertatend(int data){
        Node* temp=new Node(data);
        if(size==0){
            head=tail=temp;
        }
        else{
        tail->next=temp;
        tail=temp;
        }
        size++;
    }
    void display(){
        Node*temp= head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Linkedlist ll;
    ll.insertatend(23);
    ll.display();
    ll.insertatend(20);
    ll.display();
}