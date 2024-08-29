// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
  int data;
  Node *next=NULL;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertatfirst(Node *&Head,int data){
    Node *newnode=new Node(data);
    newnode->next=Head;
    Head=newnode;

}


void insertatlast(Node*&Head,int data){
    Node *newnode=new Node(data);
    if(Head==NULL){
        Head=newnode;
     
    }
   else {
       Node*temp=Head;
       while(temp->next!=NULL){
         temp=  temp->next;
       }
       temp->next=newnode;

    }
}

//some cases not handle perfectly
void insertatposition(Node *&Head,int data,int position){
    Node *newnode=new Node(data);
     if (position == 1) {
        insertatfirst(Head, data);
        return;
    }
    Node*temp=Head;
    position--;
    while(position--){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}





void printList(Node * Head){
    Node*temp=Head;
    while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}




int main() {
    // Write C++ code here
  Node *Head=NULL;
  insertatfirst(Head,10);
 insertatfirst(Head,20);
  insertatlast(Head,30);
 insertatlast(Head,40);
  insertatlast(Head,50);
insertatposition(Head,100,2);



printList(Head);
    return 0;
}