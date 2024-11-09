class Solution {
    public int sq(int n, int[] dp) {
        if (n == 0) {
            return 0;
        }
        if (dp[n] != -1) {
            return dp[n];
        }

        int res = Integer.MAX_VALUE;
        int i = 1;
        while (i * i <= n) {
            res = Math.min(res, 1 + sq(n - (i * i), dp));
            i++;
        }

        return dp[n] = res;
    }

    public int numSquares(int n) {
        int[] dp = new int[n + 1];
        for (int i = 0; i <= n; i++) {
            dp[i] = -1;
        }
        return sq(n, dp);
    }
}
