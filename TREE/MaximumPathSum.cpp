/*https://leetcode.com/problems/binary-tree-maximum-path-sum/*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxSum(TreeNode *root,int &a)
    {
        if(root==NULL)
        {
            return 0;
        }
        /*Left max sum*/
        int lms = maxSum(root->left,a);
        /*right max sum*/
        int rms = maxSum(root->right,a);

        a = max(a,max(root->val +rms ,max(root->val + lms,max(root->val,root->val + lms + rms))));
        
        return max(root->val,max(root->val + lms, root->val + rms));
    }
    int maxPathSum(TreeNode* root) {
        int a = INT_MIN;
        maxSum(root,a);
        return a;
    }
};