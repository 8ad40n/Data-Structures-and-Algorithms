#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s); //for taking input in string 
    cout<<s;
    cout<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    for(int i=s.length();i>=0;i--)
    {
        cout<<s[i]<<" ";
    }
}