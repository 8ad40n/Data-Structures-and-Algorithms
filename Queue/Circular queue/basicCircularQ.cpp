#include<iostream>
using namespace std;
class queue{
    public:
    int front =-1;
    int rear =-1;
    int size=5;
    int q[5];

//checking empty or not
    bool isEmpty(){
        if(front==-1 && rear==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }

//checking full or not
    bool isFull(){
        if((rear+1)%size==front)
        {
            return true;
        }
        else{
            return false;
        }
    }

//Enqueue=> adding element 
    void enqueue(int element)
    {
        if(isFull()==true){
            cout<<"Not Possible"<<endl;
        }
        else if(isEmpty()==true){
            front =0;
            rear=0;
            q[rear]=element;

        }
        else{
            rear=(rear+1)%size;
            q[rear]=element;
        }

    }

//Dequeue=>removing element
    void dequeue()
    {
        if(isEmpty()==true)
        {
            cout<<"Not possible"<<endl;
        }
        else if (front==rear)
        {
            front =-1;
            rear =-1;
        }
        else{
            front=(front+1)%size;  
        }
    }

//getting the front value
    int getFront ()
    {
        if (isEmpty()==true)
        {
            return -1;
        }
        else{
            return q[front];
        }
    }

    void print ()
    {
        if(isEmpty()==true)
        {
            cout<<"Nothing to print"<<endl;
        }
        else if (front<=rear){
            for(int i=front;i<=rear;i++)
            {
                cout<<q[i]<<" ";
            }
            
        }
        else{
            for(int i=front;i<size;i++)
            {
                cout<<q[i]<<" ";
            }
            for(int i=0;i<=rear;i++)
            {
                cout<<q[i]<<" ";
            } 
        }
        
    }
    

};
int main()
{
    queue qq;
    
    cout<<"Empty:"<<qq.isEmpty()<<endl;
    cout<<"Full:"<<qq.isFull()<<endl;
    qq.enqueue(10);
    qq.enqueue(20);
    qq.enqueue(30);
    qq.enqueue(40);


    qq.dequeue();
    qq.dequeue();

    qq.enqueue(60);
    cout<<"Front value:"<<qq.getFront()<<endl;

    qq.print();



}