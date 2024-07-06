#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class  Node{
    public:
    int data;
    Node *next;

    Node(){
    this->data=0;
    this->next=NULL;
    
}
Node(int data){
    this->data=data;
    this->next=NULL;
}
};



void insertathead(Node * &head,Node * &tail,int data){
if(head==NULL){
    Node* newnode= new Node(data);
 head=newnode;
 tail=newnode;
 return;
}

    Node *newnode= new Node(data);
    newnode->next=head;
    head=newnode;
}

void insertattail(Node * &head,Node * &tail,int data){
    if(head==NULL){
    Node* newnode= new Node(data);
 head=newnode;
 tail=newnode;
 return;
}
    Node* newnode = new Node(data);
    tail->next=newnode;

    tail=newnode;

}
void print(Node * &headhai){
    Node * temp=headhai; 
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main (){
Node *head=NULL;     //also possible Node *head = NULL
Node *tail=NULL;






insertathead(head,tail,20);
insertathead(head,tail,30);





 

insertattail(head,tail,400);
insertattail(head,tail,500);

print(head);
}