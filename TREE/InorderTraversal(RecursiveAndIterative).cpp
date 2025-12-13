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

void inOrder(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void iterativeInOrder(Node * root)
{
    if(root == NULL)
    {
        return;
    }
    Node *temp = root;
    stack<Node*>s;
    while(true)
    {
        if(temp!=NULL)
        {
            s.push(temp);
            temp = temp->left;
        }
        else
        {
            if(s.empty())break;
            cout<<s.top()->data<<" ";
            temp = s.top()->right;
            s.pop();
        }
    }
}
int main()
{
    Node *root = buildTree();
    inOrder(root);
    cout<<endl;
    iterativeInOrder(root);

    return 0;
}