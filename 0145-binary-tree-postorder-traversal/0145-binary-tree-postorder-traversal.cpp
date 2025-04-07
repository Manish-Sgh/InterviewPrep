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

    void solve(TreeNode* node, vector<int>& arr) {
        if (node != NULL) {
            solve(node->left,arr);
            solve(node->right,arr);
            arr.push_back(node->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        solve(root, res);
        return res;
        
    }
};