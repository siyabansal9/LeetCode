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
    
    int solve(TreeNode* root,int &m){
        if(root==NULL){
            return 0;
        }
        
        int left=solve(root->left,m);
        int right=solve(root->right,m);
        
        m+= abs(left)+abs(right);
        
        return (left+right+root->val)-1;
    }
    
    int distributeCoins(TreeNode* root) {
        
        int moves=0;
        
        solve(root,moves);
        
        return moves;
    }
};