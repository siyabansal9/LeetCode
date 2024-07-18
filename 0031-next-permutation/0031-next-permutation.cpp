class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n = nums.size();
       int index = -1;
        
        // Find the first index from the end where nums[i] < nums[i + 1]
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }
        
        if(index == -1) {
            // If no such index is found, reverse the whole array
            reverse(nums.begin(), nums.end());
        } 
        
        else {
            // Find the smallest number greater than nums[index] to the right of index
            int j = n - 1;
            while (j > index && nums[j] <= nums[index]) {
                j--;
            }
            
            // Swap the numbers at index and j
            swap(nums[index], nums[j]);
            
            // Reverse the numbers to the right of index
            reverse(nums.begin() + index + 1, nums.end());
        }
    }
};