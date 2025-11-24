#include<iostream>
#include<stack>
using namespace std;
int csize(char *s)
{
    int n=0;
    while(s[n]!='\0')
    {
        n++;
    }
    return n;
}
bool isValidParenthesis(char *s,int n)
{
    stack<char>st;
    for(int i=0;i<n;i++)
    {
       if(s[i]=='(' || s[i] == ')')
       {
       if(st.empty())
       {
        st.push(s[i]);
        continue;
       }
       if(st.top()=='(' && s[i]==')')
       {
        st.pop();
       }
       else
       {
        st.push(s[i]);
       }
       }
    }
    if(st.empty())
        return true;
    return false;
}
int main()
{
    char s[] ="((a+b)*(c*d))";
    int n = csize(s);
    cout<<isValidParenthesis(s,n)<<endl;
    return 0;
}