class Solution {
public:
    // Helper function to calculate the number of moves
    int solve(TreeNode* root, int &moves) {
        if (root == nullptr) {
            return 0;
        }
        
        // Recursively calculate the number of coins to be moved for left and right subtrees
        int left = solve(root->left, moves);
        int right = solve(root->right, moves);
        
        // Total moves is incremented by the absolute value of coins to be moved from left and right subtrees
        moves += abs(left) + abs(right);
        
        // Return the net excess coins in the subtree rooted at the current node
        return root->val + left + right - 1;
    }
    
    int distributeCoins(TreeNode* root) {
        int moves = 0;
        solve(root, moves);
        return moves;
    }
};