#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int value;
    Node* next;
    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};
void insertTail(Node* &head,int value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void insertHead(Node* &head,int value){
    Node* newNode=new Node(value);
    Node* temp=head;
    head=newNode;
    head->next=temp;
}
void print(Node* n){
    while(n!=NULL){
        cout<<n->value<<" ";
        n=n->next;
    }
}
int main(){
    Node* head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        insertTail(head,value);
    }
    cout<<"insert on head: ";
    int data;
    cin>>data;
    insertHead(head,data);
    print(head);
}
