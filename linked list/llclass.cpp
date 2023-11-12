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
        Node*temp=new Node(data);
        if(size>0){
            temp=tail->next;
            temp=tail;
        }
        else{
            temp=head=tail;
        }
        size++;
    
    }
    void display(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
};
int main(){
    Linkedlist ll;
    ll.insertatend(40);
    ll.insertatend(10);
    ll.display();

}