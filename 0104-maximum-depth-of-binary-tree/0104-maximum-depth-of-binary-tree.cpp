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
    int maxDepth(TreeNode* root) {
        int height = 0;

        if (root == NULL) {
            return 0;
        }
        if (root->right == NULL && root->left == NULL) {
            return 1;
        } else {
            return max(maxDepth(root->left), maxDepth(root->right)) + 1;
        }
    }
};

//BFS  Approach  lvl order traversal // 
int maxDepth_BFS(TreeNode* root) {

	if (root == NULL) {
		return 0;
	}
	queue<TreeNode*> q;
	q.push(root);
	int depth = 0;

	while (!q.empty()) {
		depth++;
		int size = q.size();
		for (int i = 0; i < size; i++) {
			TreeNode* temp = q.front();
			q.pop();
			if (temp->left != NULL) {
				q.push(temp->left);
			}
			if(temp->right != NULL) {
				q.push(temp->right);
			}
		}
	}
	return depth;

}

