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
    public List<Integer> rightSideView(TreeNode root) {
        List<Integer> res  =  new ArrayList<>();
        Queue<TreeNode> q =  new LinkedList<>();

        if(root == null) {
            return new ArrayList<>();
        }
        int Level =  0;

        q.offer(root);
        while(!q.isEmpty()) {
            List<Integer> ans =  new ArrayList<>();
            Level++;
            int size = q.size();
            for(int i = 0; i < size ; i++) {
                TreeNode temp = q.poll();
                ans.add(temp.val);

                if(temp.left != null) {
                    q.offer(temp.left);
                }
                if(temp.right!= null) {
                    q.offer(temp.right);
                }
            }
            int n = ans.size() - 1;  
            res.add(ans.get(ans.size()-1));
        }
        return res;
    }
}