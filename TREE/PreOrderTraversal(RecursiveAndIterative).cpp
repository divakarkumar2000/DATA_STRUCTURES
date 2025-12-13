#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

Node *buildTree()
{
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    Node * root = new Node(data);
    root->left = buildTree();
    root->right = buildTree(); 
    return root;
}

void PreOrder(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void iterativePreOrder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    stack<Node*>s;
    s.push(root);
    while(!s.empty())
    {
        cout<<s.top()->data<<" ";
        Node *temp = s.top();
        s.pop();
        if(temp->right)
        {
            s.push(temp->right);
        }
        if(temp->left)
        {
            s.push(temp->left);
        }
    }
}
int main()
{
    Node *root = buildTree();
    PreOrder(root);
    cout<<endl;
    iterativePreOrder(root);
    return 0;
}