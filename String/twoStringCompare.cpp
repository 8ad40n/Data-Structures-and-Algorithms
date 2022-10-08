#include<iostream>
using namespace std;
int main()
{
    string s;
    string s1;
    getline(cin,s);
    getline(cin,s1);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s1[i])
        {
            cout<<"same"<<endl;
        }
        else{
            cout<<"Not same"<<endl;
        }
    }
}