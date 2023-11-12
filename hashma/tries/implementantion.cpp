#include<iostream>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode*child[26];
    bool isterminal;
    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            child[i]=NULL;
        }
        isterminal=false;
    }
};
class Trie{
    public:
    TrieNode*root;
    Trie(){
        root = new TrieNode('\0');
    }
    void insertutil(TrieNode*root ,string word){
        if(word.length()==0){
            root->isterminal=true;
            return;
        }
        int index = word[0]-'A';
        TrieNode*child;
        if(root->child[index]!=NULL){
            child=root->child[index];
        }
        else{
            child = new TrieNode(word[0]);
            root->child[index]=child;
        }
        insertutil(child,word.substr(1));
    }
        void insertword(string word){
            insertutil(root,word);
        }
        
        bool searchutil(TrieNode*root,string word){
        if(word.length()==0){
            return root->isterminal;
        }
        int index = word[0]-'A';
        TrieNode*child;
        if(root->child[index]!=NULL){
            child = root->child[index];
        }
        else{
            return false;
        }
        return searchutil(root,word.substr(1));
    }
    void searchword(string word){
        return searchutil(word,root);
    }
};
int main(){
    Trie t;
    t.insertword("akshith");
    cout<<t.searchword("sathwik");
    return 0;
}