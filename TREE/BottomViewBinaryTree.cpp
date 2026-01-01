https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        Node *temp = root;
        queue<pair<Node*,int>>q;
        map<int,int>dmap;
        q.push({root,0});
        while(!q.empty())
        {
            int k = q.size();
            while(k)
            {
            auto temp = q.front();
            q.pop();
            Node * n = temp.first;
            int i = temp.second;
            //dmap.insert({i,n->data});
            dmap[i]=n->data;
            if(n->left)
            {
                q.push({n->left,i-1});
            }
            if(n->right)
            {
                q.push({n->right,i+1});
            }
            k--;
            }
        }
        for(auto x: dmap)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};