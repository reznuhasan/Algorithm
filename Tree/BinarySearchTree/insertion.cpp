#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        this->data=value;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* insertionBST(Node* root,int value){
    Node* newNode=new Node(value);
    if(root==NULL){
        root=newNode;
        return root;
    }else if(root->data>value){
        root->left=insertionBST(root->left,value);
    }else if(root->data<value){
        root->right=insertionBST(root->right,value);
    }
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
void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int searchValue(Node* root,int value){
    if(root==NULL){
        return -1;
    }
    cout<<root->data<<" ";
    if(root->data==value){
        return 1;
    }else if(root->data<value){
        searchValue(root->right,value);
    }else if(root->data>value){
        searchValue(root->left,value);
    }
}
int main(){
    Node* root=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        root=insertionBST(root,value);
    }
    levelOrder(root);
    //inOrder(root);
    int value;
    cout<<"enter the search value: ";
    cin>>value;
    int check=searchValue(root,value);
    if(check==-1){
        cout<<"value is not find";
    }else{
        cout<<"value find successfully";
    }
}
