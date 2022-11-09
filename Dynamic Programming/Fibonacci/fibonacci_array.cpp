#include <iostream>
using namespace std;
int fibonacci(int n){

    int arr[100];
    arr[0]=0;
    arr[1]=1;

    for (int i=2;i<=n;i++){
        arr[i]=arr[i-1] + arr[i-2];
    }
    return arr[n];

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