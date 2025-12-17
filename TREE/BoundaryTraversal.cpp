/* https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1
Tree Boundary Traversal
Difficulty: MediumAccuracy: 23.33%Submissions: 520K+Points: 4Average Time: 35m
Given a root of a Binary Tree, return its boundary traversal in the following order:

Left Boundary: Nodes from the root to the leftmost non-leaf node, preferring the left child over the right and excluding leaves.

Leaf Nodes: All leaf nodes from left to right, covering every leaf in the tree.

Reverse Right Boundary: Nodes from the root to the rightmost non-leaf node, preferring the right child over the left, excluding leaves, and added in reverse order.

Note: The root is included once, leaves are added separately to avoid repetition, and the right boundary follows traversal preference not the path from the rightmost leaf.

Examples:

Input: root = [1, 2, 3, 4, 5, 6, 7, N, N, 8, 9, N, N, N, N]
Output: [1, 2, 4, 8, 9, 6, 7, 3]
Explanation:

Input: root = [1, N, 2, N, 3, N, 4, N, N] 
Output: [1, 4, 3, 2]
Explanation:

Left boundary: [1] (as there is no left subtree)
Leaf nodes: [4]
Right boundary: [3, 2] (in reverse order)
Final traversal: [1, 4, 3, 2]
Constraints:
1 ≤ number of nodes ≤ 105
1 ≤ node->data ≤ 105
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

/*Boundary Traversal*/
bool isleaf(Node * root)
{
    if(root->left == NULL && root->right == NULL)
    {
        return true;
    }
    return false;
}
void leftTraversal(Node *root, vector<int>&result)
{
    if(root==NULL)
    {
        return;
    }
    while(!isleaf(root))
    {
        result.push_back(root->data);
        if(root->left)
          root = root ->left;
        else
          root= root->right;
    }
}
void rightTraversal(Node* root,vector<int>&result)
{
    if(root == NULL)
    {
        return ;
    }
    vector<int>temp;
    while(!isleaf(root))
    {
        temp.push_back(root->data);
        if(root->right)
        root = root->right;
        else{
            root= root->left;
        }
    }
    int n = temp.size();
    for(int i = n-1 ; i>=0;i--)
    {
        result.push_back(temp[i]);
    }
}

void leafTraversal(Node* root, vector<int>& result)
{
    if(root==NULL)
    {
        return;
    }
    if(isleaf(root))
    {
        result.push_back(root->data);
        return;
    }
    leafTraversal(root->left,result);
    leafTraversal(root->right,result);
}
int main()
{
    Node *root = buildTree();
    vector<int>result;
    cout<<"Boundary Traversal : ";
    if(!isleaf(root))
    {
        result.push_back(root->data);
    }
    leftTraversal(root->left,result);
    leafTraversal(root,result);
    rightTraversal(root->right,result);
    for(auto x:result)
    {
        cout<<x<<" ";
    }
    return 0;
}