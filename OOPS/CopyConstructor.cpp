#include<iostream>
using namespace std;
class student 
{
    public: 
    char name[10];
    int age;
    char gender;
    int marks;
    student(char *n,int n,char g,int f)
    {
     strcpy(name,n);
     age=n;
     gender=g;
     marks=f;
    }
    // copy constructor
    student(student &s)
    {
        cout<<"copy constructor is working properly ";
        strcpy(name,s.name);
        age=s.age;
        gender=s.gemder;
        marks=s.marks;
    }
    void printinfo()
    {
     cout<<"\n Student Information \n";
     cout<<"\n name of the student "<<" "<<name;
     cout<<"\n Age of the student is"<<" "<<age;
     cout<<" \nGender of the student is"<<" " <<gender;
     cout<<"\nCredits obtained by the student is" <<" "<<marks<<endl;
    }
    
};
int main()
{

}