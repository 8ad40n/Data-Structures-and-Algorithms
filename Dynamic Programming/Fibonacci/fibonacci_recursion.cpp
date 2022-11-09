#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    else {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main()
{
    int n;
    cout<<"Enter the size : ";
    cin >>n;

    cout<<"Fibonacci Series : ";
    for(int i=1;i<=n;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl<<"Last element :";

    cout<<fibonacci(n);


}

