class Solution {
    public int paintWalls(int[] cost, int[] time) {
        int n = cost.length;
        int[] dp = new int[n + 1];
        
        // Initialize dp array with a large value, as we want to find the minimum
        for (int i = 1; i <= n; i++) {
            dp[i] = Integer.MAX_VALUE;
        }
        
        dp[0] = 0; // Base case: no cost if there are no walls to paint

        for (int i = 0; i < n; i++) {
            for (int j = n; j >= 0; j--) {
                int nextWall = Math.min(j + time[i] + 1, n);
                if (dp[j] != Integer.MAX_VALUE) {
                    dp[nextWall] = Math.min(dp[nextWall], dp[j] + cost[i]);
                }
            }
        }

        return dp[n];
    }
}