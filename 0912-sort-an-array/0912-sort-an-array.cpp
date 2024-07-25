class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int minE = INT_MAX;
        int maxE = INT_MIN;
        
        unordered_map<int, int> mp;
        
        // Count occurrences of each element and find min and max elements
        for (int num : nums) {
            mp[num]++;
            if (num < minE) {
                minE = num;
            }
            if (num > maxE) {
                maxE = num;
            }
        }
        
        int index = 0;
        
        // Reconstruct the sorted array
        for (int num = minE; num <= maxE; num++) {
            while (mp[num] > 0) {
                nums[index++] = num;
                mp[num]--;
            }
        }
        
        return nums;
    }
};
