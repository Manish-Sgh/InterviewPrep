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

// Time complexity:O(N)  ---- travels each node
// Space complexity:O(h) ---- Recursive stack space
class Solution {
public:
    int height(TreeNode* root, int &diameter) {
        if(root == NULL) 
            return 0;

        int l_side = height(root->left, diameter);
        int r_side = height(root->right,diameter);

        diameter = max(diameter, l_side + r_side); 
        //diameter is max of( dia,path through this node)

        return max(l_side, r_side) + 1; // return height of curr node
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;      
    }
};