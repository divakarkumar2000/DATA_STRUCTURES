/*https://leetcode.com/problems/balanced-binary-tree/description/*/



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
/*using height function
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

bool isbalanced(Node *root)
{
    if(root == NULL)
    {
        return true;
    }
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    if(abs(lh-rh)>1)
    {
        return false;
    }

    return isbalanced(root->left) && isbalanced(root->right);
}
*/

int isbalanced(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    int lh = isbalanced(root->left);
    if(lh== -1)return -1;
    int rh = isbalanced(root->right);
    if(rh== -1)return -1;
    
    if(abs(lh-rh)>1)
    return -1;

    return 1 + max(lh,rh);
}

int main()
{
    Node *root = buildTree();
    cout<<endl;
    if(isbalanced(root)==-1)
    {
        cout<<"Tree is not balanced"<<endl;
    }
    else{
        cout<<"Tree is balanced"<<endl;
    }
    return 0;
}