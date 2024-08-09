import java.util.Arrays;

class Solution {
    public int longestConsecutive(int[] nums) {
        if (nums.length == 0) return 0;

        Arrays.sort(nums);
        int longest = 1;
        int ans = 1;

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i - 1]) {
                if (nums[i] == nums[i - 1] + 1) {
                    ans++;
                } else {
                    longest = Math.max(longest, ans);
                    ans = 1;
                }
            }
        }

        return Math.max(longest, ans);
    }
}
