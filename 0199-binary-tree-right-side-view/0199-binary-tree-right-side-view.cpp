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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        queue<TreeNode*> q;
        int level = 0;

        if (root == NULL)
            return res;
        q.push(root);

        while (!q.empty()) {
            vector<int> vis;   // store values of each level //
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
            int temp = vis[vis.size() - 1];
            res.push_back(temp);
        }
        return res;
    }
};