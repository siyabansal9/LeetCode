class Solution {
    public int maxAreaOfIsland(int[][] grid) {
        int maxArea = 0; // Variable to track the maximum area
        
        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[0].length; j++) {
                if (grid[i][j] == 1) {
                    maxArea = Math.max(maxArea, dfs(grid, i, j));
                }
            }
        }
        return maxArea;
    }
    
    // Helper method to perform DFS and calculate area
    private int dfs(int[][] grid, int i, int j) {
        // Base case: Check if out of bounds or water (0)
        if (i < 0 || j < 0 || i >= grid.length || j >= grid[0].length || grid[i][j] == 0) {
            return 0;
        }
        
        // Mark the cell as visited
        grid[i][j] = 0;
        
        // Explore all 4 directions and calculate the area
        int area = 1; // Count the current cell
        area += dfs(grid, i + 1, j); // Down
        area += dfs(grid, i - 1, j); // Up
        area += dfs(grid, i, j + 1); // Right
        area += dfs(grid, i, j - 1); // Left
        
        return area;
    }
}
