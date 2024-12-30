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
    void value_inorder(vector<int>& temp, TreeNode* node) {
	if (node != NULL) {
		value_inorder(temp, node->left);
		temp.push_back(node->val);
		value_inorder(temp,node->right);
	}
    else{
        temp.push_back(100000);
    }
}

void value_preorder(vector<int>& temp, TreeNode* node) {
	if (node != NULL) {
		temp.push_back(node->val);
		value_preorder(temp, node->left);
		value_preorder(temp, node->right);
	}
    else{
        temp.push_back(100000);
    }
}

bool isSameTree(TreeNode* p, TreeNode* q) {
	vector<int> vec_p, pre_p;
	vector<int> vec_q , pre_q;
	
	value_inorder(vec_p, p);
	value_inorder(vec_q, q);

	value_preorder(pre_p, p);
	value_preorder(pre_q, q);


	// if (vec_p.size() != vec_q.size()) {
	// 	return false;
	// }

	if (vec_p == vec_q && pre_p == pre_q) {
		return true;
	}
	else {
		return false;
	}
}
};