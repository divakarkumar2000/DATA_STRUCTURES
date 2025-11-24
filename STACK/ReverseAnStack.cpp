#include<iostream>
#include<stack>
using namespace std;
void reverseStack(stack<int> &s)
{
    stack<int> temp;
    int n = s.size();
    while(n)
    {
        int e = s.top();
        s.pop();
        for(int i=0;i<n-1;i++)
        {
            temp.push(s.top());
            s.pop();
        }
        s.push(e);
        while(!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
        n--;
    }
}

/*using recursion*/

void PutelementAtBottomOfStack(stack<int>&s,int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int ele = s.top();
    s.pop();
    PutelementAtBottomOfStack(s,x);
    s.push(ele);
}

void ReverseStackUsingRecursion(stack<int> &s)
{
   if(s.empty())
   {
    return;
   }
   int ele = s.top();
   s.pop();
   ReverseStackUsingRecursion(s);
   PutelementAtBottomOfStack(s,ele);
}

int main()
{
    stack<int> s;
    for(int i=1;i<=5;i++)
    {
        s.push(i);
    }
    reverseStack(s);
    ReverseStackUsingRecursion(s);
    while(!s.empty())
    {
        cout<<s.top()<<" "<<endl;
        s.pop();
    }
    return 0;
}