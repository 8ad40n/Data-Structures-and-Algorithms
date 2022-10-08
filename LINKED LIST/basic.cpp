#include<iostream>
using namespace std;
struct node{
    int data;
    node *nextNode;
};
int main()
{
    node *head=NULL;
    head=new node();
    head->data=45;
    head->nextNode=NULL;
    cout<<head->data;

}