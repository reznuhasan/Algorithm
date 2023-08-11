#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data=value;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* buildTree(Node* root){
    cout<<"Enter your data: ";
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter your left side"<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter your right side"<<endl;
    root->right=buildTree(root->right);

    return root;
}
void levelOrder(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
}
int main(){
    Node* root=NULL;
    root=buildTree(root);
    levelOrder(root);
}
