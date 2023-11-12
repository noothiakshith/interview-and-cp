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
    void insertateend(int data){
        Node*temp=new Node(data);
        if(size==0){
            tail=head=temp;
        }
        else{
            tail->next=temp;
            temp=tail;
        }
        size++;
    }
    void insertatmiddle(int idx, int data){
        if(idx<0||idx>size) return;
        else if(size==0){
            inserathead(data);
        }
        else if(size==size){
            insertateend(data);
        }
        else{
            Node*t=new Node(data);
            Node*temp=head;
            for(int i=1;i<idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;

        }
        size++;
    }
    void inserathead(int data){
        Node*temp=new Node(data);
        if(size==0){
            tail=head=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
       int get(int idx){
        if(idx<0||idx>size){
         cout<<"Invalid";
        }
        else if(idx==0) return head->data;
        else if(idx==size-1) return tail->data;
        else{
            Node*temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            return temp->data;
        }
        cout<<endl;
    }
    void deleteathead(){
        if(size==0) cout<<"list is empty";
        head=head->next;
        size--;
        
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Linkedlist ll;
    ll.inserathead(40);
    ll.inserathead(30);
    ll.inserathead(20);
    ll.inserathead(10);
    ll.insertateend(50);
    ll.insertateend(60);
   cout<< ll.get(16);
    ll.display();
}