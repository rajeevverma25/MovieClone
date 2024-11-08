#include<iostream>
using namespace std;
string move(string str)
{
  string substring = str.substr(1);
  string stringfrommyfriend = move(substring);
  char ch = str[0];
  if(ch=='x')
  {
      return stringfrommyfriend + ch;
  }
  return ch + stringfrommyfriend;

}
int main()
{
    string str= "xaxbxc";
    cout<<move(str)<<"  "; 
    return 0;
}