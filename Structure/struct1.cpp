#include<iostream>
using namespace std;
struct student
{
    public:
    int id;
    string name;
    double cgpa;
    int creditC;
    string department;
    bool checkProbation()
    {
        if(cgpa>=2.5)
        {
            return false;
        }
        else{
            return true;
        }
    }
    void print()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Id:"<<id<<endl;
        cout<<"Cgpa:"<<cgpa<<endl;
        cout<<"Credit Complete:"<<creditC<<endl;
        cout<<"Department:"<<department<<endl;
    }
};

int main()
{
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].id;
        cin>>s[i].name;
        cin>>s[i].cgpa;
        cin>>s[i].creditC;
        cin>>s[i].department;
    }
    for(int i=0;i<n;i++)
    {
        s[i].print();
        cout<<"Probation:"<<s[i].checkProbation()<<endl;
        cout<<endl<<endl;
    }

}