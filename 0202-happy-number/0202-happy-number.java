class Solution {
    public boolean isHappy(int n) {
        
        int slow = n;
        int fast = n;

        do {
            slow = square(slow);           // Move slow one step
            fast = square(square(fast));    // Move fast two steps
            
            // If either slow or fast reaches 1, then the number is happy
            if (slow == 1 || fast == 1) {
                return true;
            }
        } while (slow != fast); // Stop when slow meets fast
        
        // If the loop terminates without reaching 1, it's not a happy number
        return false;
    }

    public int square(int num) {
        
        int ans = 0;
        
        while(num > 0) {
            int remainder = num % 10;
            ans += remainder * remainder;
            num /= 10;
        }
        
        return ans;
    }
}
