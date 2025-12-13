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

void LevelOrderTraversal(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        int k = q.size();
        for(int i=0;i<k;i++)
        {
            cout<<q.front()->data<<" ";
            if(q.front()->left)
            {
                q.push(q.front()->left);
            }
            if(q.front()->right)
            {
                q.push(q.front()->right);
            }
            q.pop();
        }
    }
}
int main()
{
    Node *root = buildTree();
    cout<<endl;
    LevelOrderTraversal(root);
    return 0;
}