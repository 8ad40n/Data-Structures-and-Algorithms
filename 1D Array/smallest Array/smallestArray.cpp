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
    int smallest=a[0];
    for(int i=0;i<n;i++)
    {
        if(smallest>a[i])
        {
            smallest=a[i];
        }
    }
    cout<<endl;
    cout<<"Smallest number is :"<<smallest;
}