#include<iostream>
using namespace std;
void replacepi(char* inp , int i)
{
  // base case 
   if(inp[i]=='\0')
   {
       return ;
   }
  // recursive case
   
   if(inp[i]=='p' and inp[i+1]=='i')
   {
       int j = i+2;
       while (inp[j]!='\0')
       {
           j++;
       }
            while(j>=i+2)
            {
                 inp[j+2]=inp[j];
                 j--;
            }
 
       inp[i]  ='3';
       inp[i+1]='.';
       inp[i+2]='1';
       inp[i+3]='4';

       replacepi(inp,i+4);
       else{ 
       replacepi(inp,i+1);   
   }
   }
}
int main()
{ 
  char inp[20]= "pip";
  replacepi(inp , 0);
  cout<<inp<<" "<<endl;
  return 0;

}