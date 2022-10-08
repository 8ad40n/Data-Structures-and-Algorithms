#include<iostream>
using namespace std;
int main()
{
    char c='a';
    
    string s;
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==c)
        {
            count++;
        }

    }
    cout<<count;
    
}