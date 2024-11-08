#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char str[]={"abc.def.ghi"};
    char dlim[]=".";

    char* token = strtok(str, dlim);
    while(token!=NULL)
    {
        cout<< token<<endl;
        token=strtok(NULL,dlim);
    }
    return 0;
}