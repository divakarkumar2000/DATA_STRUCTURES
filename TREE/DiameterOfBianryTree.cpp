/*https://leetcode.com/problems/diameter-of-binary-tree/description/*/

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

int diameter(Node* root ,int &ans){
    if(root == NULL)
    {           
         return 0;
    }
    int lh = diameter(root->left,ans);
    int rh = diameter(root->right,ans);
    ans = max(ans,lh+rh);
    return 1 + max(lh,rh);
}


int main()
{
    Node *root = buildTree();
    cout<<endl;
    int ans = -1;
    diameter(root,ans);
    cout<<ans<<endl;
    return 0;
}