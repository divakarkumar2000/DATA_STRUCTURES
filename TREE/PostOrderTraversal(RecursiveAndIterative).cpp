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

void PostOrder(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

/*Tricky preorder is root left right 
  for postorder do root right left ... then reverse it */
void iterativePostOrder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    vector<int>ans;
    stack<Node*>s;
    s.push(root);
    while(!s.empty())
    {
        ans.push_back(s.top()->data);
        Node *temp = s.top();
        s.pop();
        if(temp->left)
        {
            s.push(temp->left);
        }
        if(temp->right)
        {
            s.push(temp->right);
        }
    }
    reverse(ans.begin(),ans.end());
    for(auto x: ans)
    {
        cout<<x<<" ";
    }
}
int main()
{
    Node *root = buildTree();
    PostOrder(root);
    cout<<endl;
    iterativePostOrder(root);
    return 0;
}