#include <iostream>
using namespace std;

struct Student
{
public:
    string Name;
    int Id;
  double cgpa;
  

    void set(string Name,int Id,double cgpa)
    {
        this->Name=Name;
        this->Id=Id;
        
        this->cgpa=cgpa;
       

    }

    void ShowInfo()
    {
        cout<<"Name             : "<<Name<<endl;
        cout<<"ID               : "<<Id<<endl;
        cout<<"CGPA             : "<<cgpa<<endl;
    }

};

int main()
{
    Student student[3];



    for(int i=0; i<3; i++)
    {
        cout<<"Enter information of student "<<i+1<<endl;
        cout<<"Name             : ";
        cin>>student[i].Name;
        cout<<"ID               : ";
        cin>>student[i].Id;
        cout<<"CGPA             : ";
        cin>>student[i].cgpa;
        cout<< endl;
    }

   

    for(int i=0; i<3 ; i++)
    {
        cout<<"Information of student "<<i+1<<endl;
        student[i].ShowInfo();
        cout << endl;
    }


    return 0;
}
