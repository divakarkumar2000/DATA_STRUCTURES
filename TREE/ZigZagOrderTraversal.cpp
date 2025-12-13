/*https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/*/


/*Superb Question*/
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*>q;
        bool flag = true;
        q.push(root);
        while(!q.empty())
        {
            int k = q.size();
            vector<int>v(k);
            for(int j =0;j<k;j++)
            {
                TreeNode* temp = q.front();
                q.pop();
                int index = flag ? j : k-1-j;
                v[index] = temp->val;
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            flag = !flag;
            ans.push_back(v);
        }
        return ans;
    }
};