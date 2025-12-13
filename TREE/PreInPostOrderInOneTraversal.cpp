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

void PreInPostOrder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    vector<int>pre,in,post;
    stack<pair<Node*,int>>s;
    s.push({root,1});
    while(!s.empty())
    {
        pair<Node*,int> temp = s.top();
        s.pop();
        if(temp.second==1)
        {
            pre.push_back(temp.first->data);
            temp.second++;
            s.push(temp);
            if(temp.first->left)
            {
                s.push({temp.first->left,1});
            }
        }
        else if(temp.second==2)
        {
            in.push_back(temp.first->data);
            temp.second++;
            s.push(temp);
            if(temp.first->right)
            {
                s.push({temp.first->right,1});
            }
        }
        else
        {
            post.push_back(temp.first->data);
        }
    }
    cout<<"PreOrder: ";
    for(auto x: pre)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"InOrder : ";
    for(auto x: in)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"PostOrder : ";
    for(auto x: post)
    {
        cout<<x<<" ";
    }
}
int main()
{
    Node *root = buildTree();
    PreInPostOrder(root);
    return 0;
}