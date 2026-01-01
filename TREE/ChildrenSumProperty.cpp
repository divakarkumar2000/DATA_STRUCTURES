/*Check for Children Sum Property in a Binary Tree

Problem Statement: Given a Binary Tree, convert the value of its nodes to follow the Children Sum Property. The Children Sum Property in a binary tree states that for every node, the sum of its children's values (if they exist) should be equal to the node's value. If a child is missing, it is considered as having a value of 0.

Note:

The node values can be increased by any positive integer any number of times, but decrementing any node value is not allowed.
A value for a NULL node can be assumed as 0.
We cannot change the structure of the given binary tree.

*/

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

void printTree(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);
}

void childrenSum(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    int a = 0;
    if(root->left)
    {
        a = a + root->left->data;
    }
    if(root->right)
    {
        a +=root->right->data;
    }
    if(a<root->data)
    {
        if(root->left)
        {
            root->left->data=root->data;
        }
        else if(root->right)
        {
            root->right->data=root->data;
        }
    }
    childrenSum(root->left);
    childrenSum(root->right);
    
    int sum = 0;
    if(root->left)
    {
        sum+= root->left->data;
    }
    if(root->right)
    {
        sum +=root->right->data;
    }
    if(root->left || root->right)
    {
    root->data=sum;
    }
}

int main()
{
    Node *root = buildTree();
    childrenSum(root);
    cout<<endl;
    printTree(root);
    return 0;
}