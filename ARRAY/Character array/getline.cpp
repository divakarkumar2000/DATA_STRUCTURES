#include<bits/stdc++.h>
using namespace std;
//cin.get() take one character at a time
void readline(char a[],int size, char stop='\n')
{
 int i=0;
 int ch=cin.get();
 while(ch!=stop)
 {
  a[i]=ch;
  i++;
  if(i==size-1)
  {
    break;
  }
  ch=cin.get();
 } 
  a[i]='\0';
}
int main()
{
    /* char a[1000];
    cin.get(a,100);
    cout<<a;
    in cin it will not input after space 
    ex : input : divakar kumar
         Output: divakar
    */
   /* cin.get(string_name,size)
      char a[100];
      cin.get(a,50);
      cout<<a;
      input: divakar kumar
      output:divakar kumar
      take string upto '\n'
    */
   char a[1000];
   readline(a,50,'$');
   // use cin.getline()
   cout<<a;
    return 0;
}
