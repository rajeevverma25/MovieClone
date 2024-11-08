#include<iostream>
using namespace std;
void GenerateSubSequence(char *inp,char *out , int i, int j)
{
    if(inp[i]!=0)
    {
        out[j]='\0';
        cout<<out<<endl;
        return ;
    }
    out[j]= inp[i];
    GenerateSubSequence(inp, out , i+1,j+1);
    GenerateSubSequence(inp,out,i+1,j);

}
int main()
{
    char inp[] = "abc";
    char out[20];
    GenerateSubSequence(inp,out,0,0);
    return 0;

}