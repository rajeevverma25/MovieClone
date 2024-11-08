#include<iostream>
using namespace std;
template <typename T>
class stack
{
    vector<T> v;
    public:
    void push(T data){
        v.push_back(data);
    }
    void pop()
    {
        if(empty())
        {
            return;
        }else {
            v.pop_back()
        }
    }
     
}