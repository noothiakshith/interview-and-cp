#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Linkedlist{
    public:
    //creation of head and tail
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
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
    void inserathead(int data){
        // temp
        Node*temp=new Node(data);
        //check the size of the ll;
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertateend(int data){
        Node*temp=new Node(data);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            temp=tail;
        }
    int getatindex(int index,int data){
        if(index<0||index>size){
            cout<<"Invalid";
            return;
        }
        else if(index==size){
            return inserathead(data);
        }
        else if(index==size-1){
            return insertateend(data);
        }
        else{
            Node*temp=new Node(data);
            Node*temp=head;
            for(int i=1;i<idx-1;i++){
                temp->next=temp;
            }
        }
    }
    }
};
int main(){
    Linkedlist ll;
    ll.inserathead(20);
    ll.inserathead(10);
    ll.inserathead(5);
    ll.insertateend(25);
    ll.display();
}