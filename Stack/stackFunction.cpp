#include<iostream>
#define sos 5
using namespace std;

    int stk[sos];
    int top=0;
    //checking the stack is empty or not
    bool isEmpty()
    {
        if(top==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
    //checking the stack is full or not
    bool isFull()
    {
        if(top==sos)
        {
            return true;
        }
        else{
            return false;
        }
    }
    //pushing element to stack
    void push(int element){
        if(! isFull())
        {
            stk[top]=element;
            top++;
        }
    }
    //poping element to satck
    bool pop(){
        if(!isEmpty()){
            top--;
            return true;
        }
        else{
            return false;
        }
    }
    //checkingTopElement / peek()
    int peek(){
        if(!isEmpty()){
            return stk[top-1];
        }
        else {
            return -1;
        }
    }
    //printing element
    void print()
    {
        bool e=isEmpty();
        if(e==false)
        {
            for(int i=top-1;i>=0;i--)
            {
                cout<<stk[i]<<" ";
            }
        }
        else{
            cout<<"    "<<endl;
        }
    }


int main()
{

    cout<<isEmpty()<<endl;
    cout<<isFull()<<endl;

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    pop();
    pop();
    cout<<endl<<peek()<<endl;
    print();
}