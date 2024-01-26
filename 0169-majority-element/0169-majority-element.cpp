class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int candidate = nums[0];
    int count = 1;

    // Find the candidate for the majority element
    for (int i = 1; i < nums.size(); ++i) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Validate the candidate
    count = 0;
    for (int num : nums) {
        if (num == candidate) {
            count++;
        }
    }

    // The candidate is guaranteed to be the majority element, so no need to check if count > n / 2
    return candidate;
}
};