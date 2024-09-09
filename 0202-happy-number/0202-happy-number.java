class Solution {
    // Helper method to compute the sum of squares of digits of a number
    int sumOfDigit(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    public boolean isHappy(int n) {
        int slow = n;
        int fast = n;
        
        // Floyd's cycle detection algorithm
        do {
            slow = sumOfDigit(slow);         // Move slow by 1 step
            fast = sumOfDigit(sumOfDigit(fast));  // Move fast by 2 steps
        } while (slow != fast);
        
        // If both slow and fast pointers meet at 1, then it is a happy number
        return slow == 1;
    }
}
