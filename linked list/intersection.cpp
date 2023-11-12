#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    //constuctor to define data in data and null in next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Linkedlist{
    public:
     int size;
     Node*head;
      Node*tail;
    Linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void display(int data){
        Node*temp=new Node(data);
        cout<<temp->data;
        temp=temp->next;
    }
};