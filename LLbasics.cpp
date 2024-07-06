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



void insertathead(Node * &head,int data){

    
    Node *newnode= new Node(data);
    newnode->next=head;
    head=newnode;
}

// void insertattail(Node * &tail,int data){
//     Node* newnode = new Node(data);
//     tail->next=newnode;

//     tail=newnode;

// }
void print(Node * &headhai){
    Node * temp=headhai; 
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main (){
Node *head=new Node(10);       //also possible Node *head = NULL
Node *tail=new Node(100);






insertathead(head,20);
insertathead(head,30);
insertathead(head,40);
insertathead(head,50);




 
// insertattail(tail,200);
// insertattail(tail,300);
// insertattail(tail,400);
// insertattail(tail,500);

print(head);
}