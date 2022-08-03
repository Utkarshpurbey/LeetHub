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
            map<int,map<int,multiset<int>>> mp;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            int sz=q.size();
            while(sz--)
            {
                auto qf=q.front();
                TreeNode *temp=qf.first;
                int col=qf.second.first;
                int level=qf.second.second;
                mp[col][level].insert(temp->val);
                q.pop();
                if(temp->left)
                {
                    q.push({temp->left,{col-1,level+1}});
                }
                if(temp->right)
                {
                    q.push({temp->right,{col+1,level+1}});
                }
            }
        }
        vector<vector<int>> ans;
        for(auto i: mp)
        {
            vector<int> temp;
            for(auto j: i.second)
            {
                for(auto k: j.second)
                {
                    temp.push_back(k);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};