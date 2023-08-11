#include<bits/stdc++.h>

using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* leftChild;
    TreeNode* rightChild;
    TreeNode(int value){
        data=value;
        leftChild=NULL;
        rightChild=NULL;
    }

};
TreeNode* buildTree(TreeNode* root){
    cout<<"Enter the Data:-";
    int n;
    cin>>n;
    root=new TreeNode(n);
    if(n==-1){
        return NULL;
    }
    cout<<"Entering data for left"<<endl;
    root->leftChild=buildTree(root->leftChild);
    cout<<"Entering data for right"<<endl;
    root->rightChild=buildTree(root->rightChild);

    return root;
}
void print(TreeNode* root){
    if(root==NULL){
        return;
    }
    print(root->leftChild);
    cout<<root->data<<endl;
    print(root->rightChild);
}
int main(){
    TreeNode* root=NULL;
    root=buildTree(root);
    print(root);
}
