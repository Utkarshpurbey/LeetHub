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
    
    bool path(TreeNode *root,int x, vector<TreeNode*> &ans){
        if(!root)
            return false;
        ans.push_back(root);
        if(root->val == x)
            return true;
        if(path(root->left,x,ans) || path(root->right,x,ans))
            return true;
        ans.pop_back(); // backtracking 
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        vector<TreeNode *> path1,path2;
        path(root,p->val,path1);
        path(root,q->val,path2);
        
        
        TreeNode *ans = NULL;
        if(path1.size() == 0 or path2.size() == 0)
                return NULL;
        
        int i =0;
        while(i<path1.size() and i<path2.size()){
            if(path1[i] == path2[i])
            {
                ans = path1[i];
                i++;
            }else break;
        }
        return ans;
        
        
    }
};