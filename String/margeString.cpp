#include<iostream>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin<<s2;
    string s3;
    int j=0;
    for(int i=0;i<s1.length()+s2.length();i++)
    {
        if(i < s1.length())
        {
            s3[i] = s1[i];
        }
        else
        {
            s3[i] = s2[j];
            j++;
        }
    }
    for(int i=0;i<s1.length()+s2.length();i++)
    {
        cout<<s3[i];
    }
}