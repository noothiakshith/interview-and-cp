#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val){
        this->val=val;
        Node*left=NULL;
        Node*right=NULL;
    }
};
void disply(Node*temp){
    if(temp==NULL) return;
    cout<<temp->val<<" ";
    disply(temp->left);
    disply(temp->right);
}
int sum(Node*root){
    if(root ==NULL){
        return 1  ;
    }
    int ans = root->val*sum(root->left)*sum(root->right);
    return ans;
}
int size(Node*root){
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
}
int maxi(Node*root){
    if(root==NULL) return INT_MIN;
    int leftmax = maxi(root->left);
    int rightmax=maxi(root->right);
    return max(root->val,max(leftmax,rightmax));
}
int level(Node*root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
int diameter(Node*root){
    if(root==NULL) return 1;
    return diameter(root->left)+diameter(root->right);
}
int main(){
    Node*a=new Node(1);
    Node*b=new Node(2);
    Node*c=new Node(3);
    Node*d=new Node(4);
    Node*e=new Node(5);
    Node*f=new Node(6);
    Node*g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    cout<<diameter(a);
}