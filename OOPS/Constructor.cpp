#include<iostream>
using namespace std;
class customer
{
    public:
    int age;
    char name[100];
    char gender;
    double credits;

    customer()
    {
        cout<<"Inside the Constructor \n";
    }
    customer(char * n,int a,char g, double cred)
    {
        strcpy(name,n);
        age=a;
        gender=g;
        credits=cred;
    }
    void printinfo()
{
    cout<<"\n Customer Information\n";
    cout<<"\n name of the student "<<" "<<name;
    cout<<"\n Age of the student is"<<" "<<age;
    cout<<" \nGender of the student is"<<" " <<gender;
    cout<<"\nCredits obtained by the student is" <<" "<<credits<<endl;
}
};

 int main()
{
    customer c1;
    strcpy(c1.name,"rajeev");
    c1.age=20;
    c1.gender='M';
    c1.credits=98.00;
    c1.printinfo();
    customer c2("Harry",20,'M',95);
    c2.printinfo();
    return 0;
}