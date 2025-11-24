#include<iostream>
using namespace std;
/*using Arrays*/
class Queue
{
    private:
    static const int n = 100;
    int a[n];
    int front = -1;
    int rear = -1;
    public:
    Queue()
    {
        for(int i=0;i<n;i++)
        {
            a[i]=-1;
        }
    }
    void push(int data);
    void pop();
    int Front();
    int size();
    bool isEmpty();
    bool isFull();

};
int Queue:: size()
{
    if(isEmpty())
    {
        return 0;
    }
    return rear-front + 1;
}
bool Queue:: isEmpty()
{
    if(rear == -1 && front == -1)
    {
        return true;
    }
    return false;
}

bool Queue:: isFull()
{
    if(rear == n-1)
    {
        return true;
    }
    return false;
}
void Queue :: push(int data)
{
    if(isEmpty())
    {
        front++;
        rear++;
        a[rear] = data;
    }
    else if(isFull())
    {
        cout<<"Queue is Full"<<endl;
    }
    else{
        rear++;
        a[rear]=data;
    }
    cout<<front<<rear<<endl;
}
void Queue :: pop()
{
    if(isEmpty())
    {
        cout<<"queue is Empty"<<endl;
        return;
    }
    if(rear-front==0)
    {
        a[front]=-1;
        rear--;
        front--;
    }
    else
    {
        for(int i=front;i<rear;i++)
        {
           a[i]=a[i+1];
        }
        a[rear]=-1;
        rear--;
    }
}
int Queue :: Front()
{
    if(isEmpty())
    {
        cout<<"Queue is empty";
        return -1;
    }
    return a[front];

}
int main()
{
    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);
    while(!Q.isEmpty())
    {
       cout<<Q.Front()<<" ";
       Q.pop();
    }
    return 0;
}