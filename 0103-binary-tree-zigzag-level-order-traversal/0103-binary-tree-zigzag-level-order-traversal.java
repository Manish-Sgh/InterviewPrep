/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> res = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList<>();
        int level = 0;

        if(root == null) {
            return res;
        }
        q.offer(root);

        while(!q.isEmpty()) {
            level++;
            int size = q.size();
            List<Integer> temp = new ArrayList<>();
            for(int i = 0; i <  size; i++) {
                TreeNode node = q.poll();
                temp.add(node.val);
                if(node.left != null) {
                    q.add(node.left);
                }
                if(node.right != null ) {
                    q.add(node.right);
                }
            }
            if(level%2 == 0) {
                Collections.reverse(temp);  
            }
            res.add(temp);
        }
        return res;
    }
}