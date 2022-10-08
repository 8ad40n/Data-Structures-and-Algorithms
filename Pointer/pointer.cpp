#include<iostream>
using namespace std;
int main()
{
    int x=10;
    cout<<"x:"<<x<<endl;
    cout<<"&x:"<<&x<<endl<<endl;

    int *p;
    p=&x;
    cout<<"p:"<<p<<endl;
    cout<<"&p:"<<&p<<endl;
    cout<<"*p:"<<*p<<endl<<endl;

    int **q;
    q=&p;
    cout<<"q:"<<q<<endl;
    cout<<"&q:"<<&q<<endl;
    cout<<"*q:"<<*q<<endl;
    cout<<"**q:"<<**q<<endl;
    cout<<endl<<endl;
}
