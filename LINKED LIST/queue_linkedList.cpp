#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
class queue{
    Node* front;
    Node* rear;
    public:
    queue(){
    front=NULL;
    rear=NULL; 
    }

    void enqueue(int x){
        Node* n=new Node(x);
        if(front==NULL){
            front=n;
            rear=n;
            return;
        }
        rear->next=n;
        rear=n;
    }

    void dequeue(){
        if(front==NULL){
            cout<<"Queue is Underflow"<<endl;
            return;
        }
        Node* todelete=front;
        front=front->next;
        delete todelete;
    }

    int peek(){
        if(front==NULL){
            cout<<"No element in queue"<<endl;
            return -1;
        }
        return front->data;
    }

    bool isEmpty()
    {
        if(front==NULL)
        {
            return true;
        }
        return false;
    }
    void print()
	{
		Node* n = front;
		cout << "Queue Item: ";
		while (n != NULL)
		{
			cout << n->data<<" ";
			n = n->next;
		}
		cout << "\n";
	}
    

};
int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.dequeue();
    //cout<<q.peek()<<endl;
    q.dequeue();
    //cout<<q.peek()<<endl;
    q.dequeue();
    q.print();
    cout<<"Empty check:"<<q.isEmpty()<<endl;
}