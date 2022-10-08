#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int *p;
    p=&a[n];
    for(int i=0;i<n;i++)
    {
        cout<<(a+i)<<" ";
        cout<<*(a+i)<<" ";
    }
}