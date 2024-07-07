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

int findlength(Node * &head){
    int len=0;
    Node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

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
void insertatposition(int position,int data,Node * &head,Node * &tail){
        if(head==NULL){
    Node* newnode= new Node(data);
 head=newnode;
 tail=newnode;
 return;
}
if(position==0){
    insertathead(head,tail,data);
    return;
}
int len=findlength(head);
if(position==len-1){
    insertattail(head,tail,data);
}

//1,find pos
   int i=1; 
   Node *prev=head;
   while (i<position)
   {
    prev=prev->next;
    i++;
   }
   Node* curr=prev->next;

   Node * newnode=new Node(data); //2
   newnode->next=curr; //3
   prev->next=newnode; //4
   
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


insertatposition(1,555,head,tail);

print(head);
}