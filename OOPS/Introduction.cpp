#include<iostream>
using namespace std;
class customer
{
    public:
    int age;
    char name[100];
    char gender;
    double credits;

  /*  void printinfo(customer c)
{
    cout<<"\n Customer Information\n";
    cout<<"\n name of the student "<<" "<<c.name;
    cout<<"\n Age of the student is"<<" "<<c.age;
    cout<<" \nGender of the student is"<<" " <<c.gender;
    cout<<"\nCredits obtained by the student is" <<" "<<c.credits;
}*/
};
void printinfo(customer c)
{
    cout<<"\n Customer Information\n";
    cout<<"\n name of the student "<<" "<<c.name;
    cout<<"\n Age of the student is"<<" "<<c.age;
    cout<<" \nGender of the student is"<<" " <<c.gender;
    cout<<"\nCredits obtained by the student is" <<" "<<c.credits;
} 
 int main()
{
    customer c1;
    strcpy(c1.name,"rajeev");
    c1.age=20;
    c1.gender='M';
    c1.credits=98.00;
    printinfo(c1);
        return 0;
}