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

node * take_input()
{
    int d;
    node * head = NULL;
    cin>>d;
    while(d!=-1)
    {
       insertATHead(head,d);
       cin>>d;
    }
    return head;
}

/*Input by file*/
node * take_input_by_file()
{
    int d;
    node * head = NULL;
    while(cin>>d)
    {
       insertATHead(head,d);
    }
    return head;
}
/*operator overloading*/

ostream& operator<<(ostream &os, node *head)
{
    printLL(head);
    return os;
}

istream& operator>>(istream &in , node *&head)
{
    head = take_input();
    return in;
}

/*Reverse a Linked list*/
node * reverseLL(node *head)
{
    if(head->next==NULL)
    {
       return head;
    }
    node *temp1=NULL;
    node *temp2=NULL;
    while(head!=NULL)
    {
        temp1=head;
        head=head->next;
        temp1->next=temp2;
        temp2=temp1;
    }
    return temp1;
}

node *recursiveReverseLL(node *head)
{
    if(head==NULL or head->next==NULL)
    {
        return head;
    }
    /*give us head of recursive list*/
    node *rhead = recursiveReverseLL(head->next);
    node *temp = head->next;
    /*
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    */
    temp->next=head;
    head->next=NULL;
    return rhead;
}

node * middlePointOfLL(node *head)
{
    if(head==NULL or head->next==NULL)
    {
        return head;
    }
    node *slow = head;
    node *fast = head->next;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node * kthNodefromTheEndLL(node *head,int k)
{
    /*k is less than the length of the linked list*/
    if(head==NULL){
        return head;
    }
    node * slow = head;
    node * fast = head;
    while(k--)
    {
        fast=fast->next;
    }
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    if(fast==NULL)
    {
        return slow;
    }
    return slow->next;
}
node *MergeTwoSortedLL(node *list1, node *list2)
{
    if(list1==NULL)
    {
        return list2;
    }
    if(list2==NULL)
    {
        return list1;
    }

    node * dummy = new node(-1);
    node * temp = dummy;
    while(list1!=NULL && list2!=NULL)
    {
        if(list1->data<=list2->data)
        {
            temp->next = list1;
            temp = list1;
            list1 = list1->next;
        }
        else{
            temp->next = list2;
            temp = list2;
            list2 = list2->next;
        }
    }
    if(list1)
    {
        temp->next = list1;
    }
    if(list2)
    {
        temp->next = list2;
    }
    return dummy->next;
}
node * RecursiveMergeTwoSortedLL(node *list1, node *list2)
{
    if(list1==NULL)
    {
        return list2;
    }
    if(list2==NULL)
    {
        return list1;
    }
    node * temp = NULL;
    if(list1->data<=list2->data)
    {
        temp = list1;
        temp->next = RecursiveMergeTwoSortedLL(list1->next,list2);
    }
    else{
        temp = list2;
        temp->next = RecursiveMergeTwoSortedLL(list1,list2->next);
    }
    return temp;
}

node *mergeSort(node *head)
{
    if(head == NULL || head->next==NULL)
    {
        return head;
    }
    node *mid = middlePointOfLL(head);
    node *l1 = head;
    node *l2 = mid->next;
    mid->next = NULL;
    node *h1 = mergeSort(l1);
    node *h2 = mergeSort(l2);

    node * temp = MergeTwoSortedLL(h1,h2);
    return temp;
}
int main()
{
    /*
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
    */

    //node *head1 = take_input();
    //node *head2 = take_input();
    //node *head1 = NULL;
    //node *head2 = NULL;
    //cin>>head1>>head2;
    //cout<<head1<<head2;
    //printLL(head);

    //node *head = take_input();
    //printLL(head);

    //head = reverseLL(head);
    //printLL(head);

    //head = recursiveReverseLL(head);
    //printLL(head);

    //node *mid = middlePointOfLL(head);
    //node * kthEle = kthNodefromTheEndLL(head,3);
    //cout<<kthEle->data<<endl;
    node *head1 = take_input();
   // node *head2 = take_input();
    printLL(head1);
   // printLL(head2);

    //node * head = MergeTwoSortedLL(head1,head2);
    //printLL(head);
    //node * headR = RecursiveMergeTwoSortedLL(head1,head2);
    node * headR = mergeSort(head1);
    printLL(headR);

    return 0;
}