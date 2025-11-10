#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int a)
    {
        data = a;
        next = NULL;
    } 
};

void insertATHead(node * &head,int data)
{
    if(head==NULL)
    {
        head = new node(data);
        return;
    }
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

int lengthLL(node *head)
{
    int cnt = 0;
    if(head==NULL)
    {
        return cnt;
    }
    else{
        while(head->next!=0)
        {
            cnt++;
            head=head->next;
        }
    }
    return cnt+1;
}
void insertAtTail(node * &head, int data)
{
    if(head==NULL)
    {
        head = new node(data);
        return;
    }
    else
    {
        node *temp = head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next = new node(data);
        temp->next->next = NULL;
    }
}
void insertInMiddle(node * &head, int data, int pos)
{
    node * temp = head;
    if(head==NULL || pos == 0)
    {
        insertATHead(head,data);
        return;
    }
    else if(pos>lengthLL(temp))
    {
        insertAtTail(head,data);
        return;
    }
    else
    {
    while(pos>1)
    {
        temp = temp->next;
        pos--;
    }
    node *NewNode = new node(data);
    NewNode->next = temp->next;
    temp->next = NewNode;
    }
}
void printLL(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"-->"; 
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
void deleteAnodeInLL(node * &head, int pos)
{
    if(head == NULL)
    {
        return;
    }
    if(pos == 0)
    {
        node *temp = head->next;
        delete head;
        head = temp;
    }
    else{
        node *temp = head;
        while(pos>1)
        {
            temp = temp->next;
            pos--;
        }
        node *dummy = temp->next;
        temp->next= dummy->next;
        delete dummy;
    }
}

bool searchInLL(node *head,int key)
{
    node *temp = head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

bool RecursiveSearchInLL(node *head,int key)
{
    if(head==NULL)
    {
        return false;
    }
    if(head->data==key)
    {
        return true;
    }
    else
    {
        return RecursiveSearchInLL(head->next,key);
    }
}
int main()
{
    node * head = NULL;
    insertATHead(head,4);
    insertATHead(head,2);
    insertATHead(head,1);
    insertATHead(head,0);
    printLL(head);
    insertInMiddle(head,3,3l);
    printLL(head);
    insertAtTail(head,5);
    printLL(head);
    insertAtTail(head,6);
    printLL(head);
    deleteAnodeInLL(head,6);
    printLL(head);
    deleteAnodeInLL(head,0);
    printLL(head);
    deleteAnodeInLL(head,2);
    printLL(head);
    cout<<searchInLL(head,5)<<endl;;
    cout<<RecursiveSearchInLL(head,7)<<endl;

    return 0;
}