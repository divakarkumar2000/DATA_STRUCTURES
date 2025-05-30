#include<bits/stdc++.h>
using namespace std;

/* 
   char *strtok(char *s, char* delimiters)
   returns a taken on each subsequent call
   on the first call function should be passed with string argument for 's'
   on subsequent calls we should pass the string argument as null 
*/

int main()
{
    char s[] = "I will become the strongest man in the world";

    char *ptr = strtok(s," ");

    cout<<ptr<<endl;
    
    while(ptr!=NULL)
    {
        ptr = strtok(NULL," ");
        cout<<ptr<<endl;
    }

    return 0;
}

