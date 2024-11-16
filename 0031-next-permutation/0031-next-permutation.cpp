class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n = nums.size();
       int index = -1;
        
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }
        
        if(index == -1) {
            reverse(nums.begin(), nums.end());
        } 
        
        else {
            int j = n - 1;
            while (j > index && nums[j] <= nums[index]) {
                j--;
            }
            
            swap(nums[index], nums[j]);
            
            reverse(nums.begin() + index + 1, nums.end());
        }
    }
};