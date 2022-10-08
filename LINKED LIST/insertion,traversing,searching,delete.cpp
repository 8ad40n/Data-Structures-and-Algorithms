#include<iostream>
using namespace std;
struct Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;
    }
};
//inserting element in first
void insertInHead(Node* &head,int value){
    Node *n=new Node(value);
    n->next=head;
    head=n;
}
//inserting element in last
void insertInTail(Node* &head,int value){
    Node *n=new Node(value);
    if(head==NULL){
        head=n;
        return;
    }
    Node* current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=n;
}
//delete at head
void deleteAtHead(Node* &head){
    Node *todelete=head;
    head=head->next;
    delete todelete;

}
//deletion
void deletion(Node* &head,int value){
    if(head==NULL){
        return;
    }
    Node* current=head;
    while(current->next->data!=value){
        current=current->next;
    }
    Node* todelete=current->next;
    current->next=current->next->next;
    delete todelete;
}
//printing
void display(Node* &head){
    Node* current=head;
    while(current!=NULL){
        cout<<current->data<<"->";
        current=current->next;
    }
    cout<<"NULL"<<endl;
}
//searching element
bool search(Node* &head,int key)
{
    Node* current=head;
    while(current!=NULL){
        if(current->data==key){
            return true;
        }
        current=current->next;
    }
    return false;
}
int main(){
    Node* head=NULL;
    insertInTail(head,1);
    insertInTail(head,2);
    insertInTail(head,3);
    display(head);
    insertInHead(head,4);
    display(head);
    deleteAtHead(head);
    display(head);
    deletion(head,2);
    display(head);
    cout<<search(head,3);

}
