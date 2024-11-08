#include<iostream>
using namespace std;
class student 
{
    public: 
    char name[10];
    int age;
    char gender;
    int marks;
    student()
    {
        cout<<"I am inside the default constructor ";
    }
    student(char *n,int a,char g,int f)
    {
     strcpy(name,n);
     age=a;
     gender=g;
     marks=f;
    }
    // copy constructor
    student(student &s)
    {
        cout<<"copy constructor is working properly ";
        strcpy(name,s.name);
        age=s.age;
        gender=s.gender;
        marks=s.marks;
    } 
    void opeartor=(student s)
    {
         cout<<"copy assignment operator is working properly " ; 
        strcpy(name,s.name);
        age=s.age;
        gender=s.gender;
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
   student c1("rajeev",22,'M',98);
   student c2;
    c2.operator=c1;
   c2.printinfo();
}