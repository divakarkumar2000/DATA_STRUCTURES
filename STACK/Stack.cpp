#include<bits/stdc++.h>
using namespace std;
/*Stack -> LIFO */
/* Stack of books, Stack of boxes etc.*/
/*Implementation of stack using array
class Stack{
   int a[50]={0};
   int Top = -1;
   public:
   void push(int data);
   int pop();
   int top();
   bool isEmpty();
   bool isFull();
};
void Stack::push(int data)
{
    if(Top>49)
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }
    a[++Top] = data;
}
int Stack::pop()
{
    if(Top==-1)
    {
        cout<<"Stack is empty";
        return -1;
    }

    int ele = a[Top];
    Top--;
    return ele;
}
int Stack::top()
{
    if(Top==-1)
    {
        return -1;
    }
    return a[Top];
}

bool Stack::isEmpty()
{
     if(Top==-1)
     {
        return true;
     }
     return false;
}
bool Stack::isFull()
{
    if(Top==49)
    {
        return true;
    }
    return false;
}
*/
/*Implentation of stack using linked list
  everything is same just we have to add node
  at head 
  ex: 3->2->1
      |
      Top
      4->3->2->1
      |
      Top
 */
/*Using vector*/
template<typename T>
class Stack{
   private:
   vector<T>v;
   public:
   void push(T data)
   {
      v.push_back(data);
   }
   bool isEmpty()
   {
      if(v.size()==0)
        return true;
      return false;
   }
   T top()
   {
    return v[v.size()-1];
   }
   void pop()
   {
      if(!isEmpty())
      v.pop_back();
   }
};

int main()
{
    Stack<int> S;
    S.push(1);
    S.push(2);
    S.push(4);
    S.push(5);
    S.push(10);
    while(!S.isEmpty())
    {
        int ele = S.top();
        cout<<ele<<" "<<endl;
        S.pop();
    }
    return 0;
}