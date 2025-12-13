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
/*https://leetcode.com/problems/maximum-depth-of-binary-tree/description/*/
/* Using Level Order Traversal */
void LevelOrderTraversal(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*>q;
    q.push(root);
    int i = 0;
    while(!q.empty())
    {
        int k = q.size();
        for(int i=0;i<k;i++)
        {
            //cout<<q.front()->data<<" ";
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
        i++;
    }
    cout<<"Height of tree : "<<i<<endl;
}

/*IMP : USING RECURSION*/

int maxDepth(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    return 1 + max(lh,rh);
}

int main()
{
    Node *root = buildTree();
    cout<<endl;
    LevelOrderTraversal(root);
    cout<<"USing recursion: "<<maxDepth(root)<<endl;;
    return 0;
}