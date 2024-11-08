#include<iostream>
using namespace std;
string keypad[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void generateWords(char *inp, char *out,int i , int j)
{
    if(inp[i]=='\0')
    {
        out[i]='\0';
        cout<<out<<endl;
        return;
    }
    int d= inp[i]-'0'; // done to get the number of digits
    if(d==0 or d==1)
    {
        generateWords(inp,out,i+1,j);
        return;
    }
    string optionString = keypad(d);
    for(char c: optionString)
    {
      out[j]=c;
      generateWords(inp,out,i+1,j+1);
    }             
}
int main()
{
    char inp[]="23";
    char out[10];
    generateWords(inp,out,0,0);
    return 0;
}