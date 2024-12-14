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
        List<List<Integer>> res = new LinkedList<>();
        if(root == null) return res;
        
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        
        int level = 0;
        
        while(!q.isEmpty()){
            int size = q.size();
            List<Integer> levelSubList = new LinkedList<>();
            while(size > 0){
                TreeNode node = q.poll();
                if(level%2 != 0){
                    levelSubList.addFirst(node.val);
                }
                else{
                    levelSubList.add(node.val);
                }
                
                if(node.left != null) q.add(node.left);
                if(node.right != null) q.add(node.right);
                
                size--;
            }
            level++;
            res.add(levelSubList);
        }
        return res;
    }
}