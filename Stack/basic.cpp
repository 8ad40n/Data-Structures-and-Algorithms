#include<iostream>
#define sos 5
using namespace std;
class stack
{
    public:

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

};
int main()
{

    stack s;
    cout<<"Stack is empty or not:"<<s.isEmpty()<<endl;
    cout<<"Stack is full or not:"<<s.isFull()<<endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // s.pop();
    // s.pop();
    s.push(50);
    s.pop();
    
    //cout<<endl<<s.peek()<<endl;
    s.print();
}