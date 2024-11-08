#include<iostream>
#include<algorithm>
using namespace std;
#include<set>
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    cout<<" size of set "<<s.size()<<endl;
    s.erase(5);
    cout<<"size "<<s.size()<<endl;
    for(auto x:s)  //auto is a keyword used when you dont know the type 
    {
        cout<<x<<" ";
    }

    // another way for looping is normal loop using begin and end functions showm below
     
     for(auto it=s.begin(), end=s.end();it!=s.end();it++)
     {
         cout<<*it<<" ";
     }
     // for finding an element we have 2 options one is count and the other is find 
     // 1st method
     if(s.count(5)){
         cout<<"5 is present";
     }
     else 
     cout<<" 5 is not present";

     // 2nd method
     if(s.find(3)!=s.end())
     {
         cout<<"3 is present";

     }
     else
     cout<<"3 is not present";

     s.clear();
     cout<<s.size();
}