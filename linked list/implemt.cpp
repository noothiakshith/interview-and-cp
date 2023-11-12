#include<iostream>
using  namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int main(){
    Node *a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;
    Node *temp =a;
    while(temp!=NULL){
        cout<< temp->data<<endl;
        temp=temp->next;
    }


}