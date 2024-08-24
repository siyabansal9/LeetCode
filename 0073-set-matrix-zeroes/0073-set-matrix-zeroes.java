import java.util.ArrayList;

class Solution {
    public void setZeroes(int[][] matrix) {
        ArrayList<Integer> x = new ArrayList<>();
        ArrayList<Integer> y = new ArrayList<>();
        
        int n = matrix.length;
        int m = matrix[0].length;
        
        // Find all the zeros in the matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    x.add(i);  // Row index
                    y.add(j);  // Column index
                }
            }
        }
        
        // Set rows to zero
        for (int i = 0; i < x.size(); i++) {
            int rowIndex = x.get(i);
            for (int j = 0; j < m; j++) {
                matrix[rowIndex][j] = 0;
            }
        }
        
        // Set columns to zero
        for (int i = 0; i < y.size(); i++) {
            int colIndex = y.get(i);
            for (int j = 0; j < n; j++) {
                matrix[j][colIndex] = 0;
            }
        }
    }
}
