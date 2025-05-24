#include<iostream>
#include <string.h>
using namespace std;
bool ispalindrome(char a[],int size)
{
    int i=0,j=size-1;
    while(i<j)
    {
      if(a[i]!=a[j])
      {
        return false;
      }
      i++;
      j--;
    }
    return true;
}
int main()
{
  char ch[50];
  cin.get(ch,50);
  int size=strlen(ch);
  if(ispalindrome(ch,size))
  {
    cout<<"String is palindrome ";
  }
  else
  {
    cout<<"String is not palindrome";
  }
}