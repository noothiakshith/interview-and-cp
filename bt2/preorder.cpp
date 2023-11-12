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
void disply(Node*root,int curr, int level){
    if(root==NULL) return;
    if(curr==level) cout<<root->val;
    disply(root->left,curr+1,level);
    disply(root->right,curr+1,level);

}
int level(Node*root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void levelorder(Node*tree){
    int n = level(tree);
    for(int i=0;i<=n;i++){
        disply(tree,1,i);
    }
}
void levelorderq(Node*root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node*temp=q.front();;
        q.pop();
        cout<<temp->val;
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
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
    levelorderq(a);


}