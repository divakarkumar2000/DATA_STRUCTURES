https://leetcode.com/problems/binary-tree-right-side-view/description/

map<int, int> mp;

if (mp.find(key) != mp.end()) {
    // key is present
} else {
    // key is NOT present
}

map.insert() // does the same like above

// Traverse through map
map<int, int> mp;

for (auto it = mp.begin(); it != mp.end(); ++it) {
    cout << it->first << " " << it->second << endl;
}


/*right view*/
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<pair<TreeNode*,int>>q;
        map<int,int>mp;
        q.push({root,0});
        while(!q.empty())
        {
            auto temp = q.front();
            q.pop();
            int i = temp.second;
            TreeNode *Node = temp.first;
            mp[i]=Node->val;
            if(Node->left)
            {
                q.push({Node->left,i+1});
            }
            if(Node->right)
            {
                q.push({Node->right,i+1});
            }
        }
        for(auto x:mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};

/*using recursion*/
reverse preoreder -> root right left
rightSide(root,0,res);
rightSide(Node * root,int level,res)
{
    if(root==NULL)
    {
        return;
    }
    if(level==res.size())
    {
        res.push_back(root->val);
    }
    rightSide(root->right,level+1,res);
    rightSide(root->left,level+1,res);

}

/*left view*/
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<pair<TreeNode*,int>>q;
        map<int,int>mp;
        q.push({root,0});
        while(!q.empty())
        {
            auto temp = q.front();
            q.pop();
            int i = temp.second;
            TreeNode *Node = temp.first;
            mp[i].insert(Node->val);
            if(Node->left)
            {
                q.push({Node->left,i+1});
            }
            if(Node->right)
            {
                q.push({Node->right,i+1});
            }
        }
        for(auto x:mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};

/*using recursion*/
preoreder -> root left right
leftSide(root,0,res);
leftSide(Node * root,int level,res)
{
    if(root==NULL)
    {
        return;
    }
    if(level==res.size())
    {
        res.push_back(root->val);
    }
    leftSide(root->left,level+1,res);
    leftSide(root->right,level+1,res);
    

}