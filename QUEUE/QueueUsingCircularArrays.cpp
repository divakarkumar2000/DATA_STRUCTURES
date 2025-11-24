#include<iostream>
using namespace std;
class Queue{
    private:
    static const int n = 100;
    int a[n];
    int front = -1;
    int rear = -1;
    public:
    Queue()
    {
        for(int i =0;i<n;i++)
        {
            a[i]=-1;
        }
    }

    void push(int data);
    void pop();
    int Front();
    bool isEmpty();
    bool isFull();
    int size();
};
bool Queue:: isEmpty()
{
    if(rear==-1 && front ==-1)
    {
        return true;
    }
    else
    return false;
}
bool Queue:: isFull()
{
    if((rear+1)%n == front)
    {
        return true;
    }
    return false;
}        
void Queue:: push(int data)
{
    if(isFull())
    {
        cout<<"Queue is Full : "<<data<<endl;
    }
    else if(isEmpty())
    {
        front = 0;
        rear = 0;
        a[rear]=data;
    }
    else{
        rear = (rear+1)%n;
        a[rear]=data;
    }
}
void Queue:: pop()
{
    if(isEmpty())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else if(front==rear)
    {
        a[front]=-1;
        front = rear = -1;
    }
    else{
        a[front]=-1;
        front = (front+1)%n;
    }
}
int Queue:: Front()
{
    if(isEmpty())
    {
        cout<<"Queue is Empty"<<endl;
        return -1;
    }
    else{
        return a[front];
    }
}
int main()
{
    Queue Q;
    for(int i=1;i<=105;i++)
    {
       Q.push(i);
    }
    for(int i=0;i<5;i++)
    {
       Q.pop();
    }
    for(int i=101;i<=105;i++)
    {
       Q.push(i);
    }
    while(!Q.isEmpty())
    {
       cout<<Q.Front()<<" ";
       Q.pop();
    }
    return 0;
}