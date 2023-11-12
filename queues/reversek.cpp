#include<bits/stdc++.h>
using namespace std;
void display(queue<int>&q){
    int n= q.size();
    for(int i=0;i<n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    display(q);
    cout<<endl;
    int k = 2;
    stack<int>st;
    int n = q.size();
    for(int i=1;i<=k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i=1;i<=n-k;i++){
        int x = q.front();
        q.push(x);
        q.pop();
    }
    display(q);
}
