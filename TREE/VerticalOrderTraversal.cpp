/*https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/*/


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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
        {
            return ans;
        }
        map<int,map<int,multiset<int>>>dmap;
        queue<pair<TreeNode* ,pair<int,int>>>q;
        q.push({{root},{0,0}});
        while(!q.empty())
        {
            auto temp = q.front();
            q.pop();
            TreeNode* n = temp.first;
            auto p = temp.second;
            int i = p.first;
            int j = p.second;
            dmap[i][j].insert(n->val);
            if(n->left)
            {
                q.push({{n->left},{i-1,j+1}});
            }
            if(n->right)
            {
                q.push({{n->right},{i+1,j+1}});
            }
        }
        for(auto x: dmap)
        {
            vector<int> dk;
            for(auto y: x.second)
            {
                for(auto z: y.second)
                {
                    dk.push_back(z);
                }
            }
            ans.push_back(dk);
        }
        return ans;
    }
};