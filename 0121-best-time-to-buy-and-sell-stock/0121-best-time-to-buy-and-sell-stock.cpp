class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxPro = 0;
        int n = nums.size();
        int minP = INT_MAX;
        
        for(int i=0;i<n;i++){
            minP = min(minP,nums[i]);
            maxPro = max(maxPro,nums[i]-minP);
        }
        
        return maxPro;
    }
};