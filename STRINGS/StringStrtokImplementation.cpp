#include<bits/stdc++.h>
using namespace std;

char *stringToken(char *str,char delim)
{
    static char *input = NULL;
    if(str!=NULL)
    {
        //for first function call
        input = str;
    }
    
    if(input==NULL)
    {
        return NULL;
    }

     
    char *output = new char[strlen(input)+1];
    int i=0;
    while(input[i]!='\0')
    {
        if(input[i]!=delim)
        {
            output[i]=input[i];
        }
        else{
            output[i]='\0';
            input = input + i + 1;
            return output;
        }
        i++;
    }

    //corner case
    output[i]='\0';
    input=NULL;
    return output;

}


int main()
{
    char s[] = "I will become the strongest man in the world";

    char *ptr = stringToken(s,' ');

    cout<<ptr<<endl;
    
    while(ptr!=NULL)
    {
        ptr = stringToken(NULL,' ');
        cout<<ptr<<endl;
    }

    return 0;
}