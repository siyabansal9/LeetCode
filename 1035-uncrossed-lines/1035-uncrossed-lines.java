class Solution {
    public int maxUncrossedLines(int[] nums1, int[] nums2) {
        int m = nums1.length;
        int n = nums2.length;
        
        // Create a DP table to store the results
        int[][] dp = new int[m + 1][n + 1];
        
        // Fill the DP table
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (nums1[i - 1] == nums2[j - 1]) {
                    // If the elements match, we can draw a line
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    // Otherwise, we skip one element from either nums1 or nums2
                    dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        
        // The answer is in the bottom-right cell of the DP table
        return dp[m][n];
    }
}