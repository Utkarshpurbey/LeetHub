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
    bool isSameTree(TreeNode* p1, TreeNode* p2) {
        if(p1==NULL && p2== NULL)
            return true;
        if(p1==NULL || p2== NULL)
            return false;
        bool prime_condition = (p1->val== p2->val);
        bool left = isSameTree(p1->left, p2->left);
        bool right = isSameTree(p1->right, p2->right);
        
        return (prime_condition && left && right);
    }
};