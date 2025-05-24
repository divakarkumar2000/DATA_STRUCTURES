/* 
   Remove consecutive duplicate elements from a string
   Ccooopillot   copilot
*/
#include<bits/stdc++.h>
using namespace std;

/*char* remove_consecutive(char s[])
{
    int size= strlen(s);
    int i=0;
    static char ans[100];
    int j=0;
    while(i<size)
    {
        if(s[i]==s[i+1])
        {
           i++;
           continue; 
        }
        ans[j]=s[i];
        j++;
        i++;
    }
    ans[j]='\0';
   return ans;
}
*/

void remove_consecutive(char s[])
{
    int size= strlen(s);
    int i=0;
    int j=0;
    while(i<size)
    {
        if(s[i]==s[i+1])
        {
           i++;
           continue; 
        }
        s[j]=s[i];
        j++;
        i++;
    }
    s[j]='\0';
}
int main()
{
   /*char ch[] = "ccooopillot";
   char* ans = remove_consecutive(ch);*/

   char ch[2000];
   cin.getline(ch,2000);
   remove_consecutive(ch);
   cout<<ch<<endl;
   return 0;
}