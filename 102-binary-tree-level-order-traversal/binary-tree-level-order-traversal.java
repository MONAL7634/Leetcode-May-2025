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
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> ans = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList();
        if(root!=null) q.add(root);
        while(!q.isEmpty()){
            List<Integer> curr = new ArrayList<>();
            int size = q.size();

            while(size!=0){
                TreeNode temp = q.peek();
                q.poll();
                curr.add(temp.val);
                if(temp.left!=null) q.add(temp.left);
                if(temp.right!=null) q.add(temp.right);
                size--;
            }
            ans.add(curr);
        }
        return ans;
    }
}