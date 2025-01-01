/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        int level = 0;

        if (root == NULL)
            return res;
        q.push(root);

        while (!q.empty()) {
            vector<int> vis;
            int size = q.size();
            level++;
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                vis.push_back(node->val);

                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);         
            }
            if(level%2 == 0) {
                reverse(vis.begin(), vis.end());
            }
            res.push_back(vis);
        }
        return res;
    }
};