class Solution {
    public int solve(String s1, String s2, int i, int j, int[][] dp){
        if(i>=s1.length() || j>=s2.length()){
            return 0;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        if(s1.charAt(i) == s2.charAt(j)){
            dp[i][j] = 1 + solve(s1, s2, i+1, j+1, dp);
        }
        else{
            dp[i][j] = Math.max(solve(s1, s2, i+1, j, dp),solve(s1, s2, i, j+1, dp));
        }
        
        return dp[i][j];
        
    }
    
    public int longestCommonSubsequence(String s1, String s2) {
        int n = s1.length();
        int m = s2.length();
        
        if (n == 0 || m == 0) {
            return 0;
        }
        
        int[][] dp = new int[n][m];
        
        for(int[] row : dp){
            Arrays.fill(row,-1);
        }
        
        return solve(s1, s2, 0, 0, dp);
    }
}