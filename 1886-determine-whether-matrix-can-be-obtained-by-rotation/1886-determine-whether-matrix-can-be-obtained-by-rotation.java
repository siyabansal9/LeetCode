class Solution {
    
    // Function to rotate the matrix 90 degrees clockwise
    private static int[][] rotate90(int[][] matrix) {
        int n = matrix.length;
        int[][] rotated = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                rotated[j][n - 1 - i] = matrix[i][j];
            }
        }
        return rotated;
    }
    
    // Function to check if two matrices are equal
    private static boolean areEqual(int[][] matrix1, int[][] matrix2) {
        int n = matrix1.length;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix1[i][j] != matrix2[i][j]) {
                    return false;
                }
            }
        }
        return true;
    }
    
    public boolean findRotation(int[][] mat, int[][] target) {
        int[][] rotated = mat;
        for (int i = 0; i < 4; i++) {
            if (areEqual(rotated, target)) {
                return true;
            }
            rotated = rotate90(rotated);
        }
        return false;
    }
}
