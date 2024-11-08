#include<iostream>
using namespace std;
void generatePermutaions(char * inp, int i)
{
    if(inp[i]=='\0')
    {
        cout<<inp<<endl;
    return ;
    }
    for(int j=i;j<strlen(inp);j++)
    {
        swap(inp[i],inp[j]);
        generatePermutaions(inp,i+1);
        swap(inp[i],inp[j]);    // Backtracking step
    }
}
int main()
{
    char inp[]="abc";
    generatePermutaions(inp,0);

    return 0;

}