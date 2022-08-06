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
    
   pair<bool,int> balanced(TreeNode* root){
            if(root== NULL)
            return (make_pair(true,0));
        
        pair<bool,int> left = balanced(root->left);
        pair<bool,int> right = balanced(root->right);
       
       pair<bool,int > ans;
       
       ans.second = max(left.second,right.second)+1;
       bool prime = abs(left.second - right.second) <=1 ;
       ans.first = prime && left.first && right.first;
       
       return ans;
 }
    
    
    
    bool isBalanced(TreeNode* root) {
        return balanced(root).first;
        
   
        
    }
};