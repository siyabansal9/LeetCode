class Solution {
public:
    int solve(string& s1, string& s2, int i, int j, vector<vector<int>>& dp) {
        if (i >= s1.length() || j >= s2.length()) {
            return 0; 
        }

        if (dp[i][j] != -1) {
            return dp[i][j]; 
        }

        if (s1[i] == s2[j]) {
            dp[i][j] = 1 + solve(s1, s2, i + 1, j + 1, dp); 
        } else {
            dp[i][j] = max(solve(s1, s2, i + 1, j, dp), solve(s1, s2, i, j + 1, dp)); // Characters don't match
        }

        return dp[i][j];
    }

    int longestCommonSubsequence(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        vector<vector<int>> dp(n, vector<int>(m, -1)); // Initialize memoization table with -1

        return solve(s1, s2, 0, 0, dp); // Start recursion
    }
};
