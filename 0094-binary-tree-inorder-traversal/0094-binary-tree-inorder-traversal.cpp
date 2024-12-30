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
    void inorderTraversal_helper(TreeNode* root, vector<int> &res) {
        if(root != NULL) {
            inorderTraversal_helper(root->left, res);
            res.push_back(root->val);
            inorderTraversal_helper(root->right, res);
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> res ; 
        inorderTraversal_helper(root, res);
        return res;
    }
};