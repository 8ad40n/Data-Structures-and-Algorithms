#include<iostream>
using namespace std;
int fibonacci (int n)
{
    if(n<=1)
    {
        return n;
    }
    
        int fim2=0;
        int fim1=1;
        int fi;

        for(int i=2;i<=n;i++){
            fi=fim1 + fim2;
            fim2 = fim1;
            fim1 = fi;
        }
return fi;
    
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