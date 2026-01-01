https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/?source=submission-ac



Using Node path 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool path(TreeNode* root, TreeNode*p,vector<TreeNode*>&p1)
    {
        if(root==NULL)
        {
            return false;
        }
        p1.push_back(root);
        if(root==p)
        {
            return true;
        }
        if(path(root->left,p,p1) || path(root->right,p,p1))
        {
            return true;
        }
        p1.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>p1;
        vector<TreeNode*>q1;
        path(root,p,p1);
        path(root,q,q1);
        int i =0;
        while(i<p1.size() && i<q1.size())
        {
            if(p1[i]==q1[i])
            {
                i++;
            }
            else
            {
                break;
            }
        }
        return p1[i-1];
    }
};




Using LCA Feature 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       if(root==NULL || root==p || root == q)
       {
          return root;
       }
    
       TreeNode *left = lowestCommonAncestor(root->left,p,q);
       TreeNode *right = lowestCommonAncestor(root->right,p,q);
       if(left==NULL)
       {
           return right;
       }
       else if(right==NULL)
       {
        return left;
       }
       return root;
    }
};