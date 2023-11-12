#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void display(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
void displayrec(Node*head){
    Node*temp=head;
    if(temp==NULL) return;
    cout<<temp->data;
    displayrec(temp->next);
}
void displayrev(Node*head){
    Node*temp=head;
    if(temp==NULL) return ;
    displayrev(temp->next);
    cout<<temp->data;
}
int size(Node*head){
    Node *temp = head;
    int  n=0;
    while(temp!=head){
        n++;
        temp=temp->next;
    }
    return n;
}
int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;
    displayre(a);
}