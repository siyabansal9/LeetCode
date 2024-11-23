class Solution {
public:
    
    vector<vector<int>> ans;
    
    void subsetHelper(vector<int>& nums, int i, vector<int> subset) {
        if(i==nums.size()){
            ans.push_back(subset);
            return;
        }
        
        subset.push_back(nums[i]);
        subsetHelper(nums,i+1,subset);
        subset.pop_back();
        subsetHelper(nums,i+1,subset);
        
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        subsetHelper(nums,0,subset);
        
        return ans;
        
        return ans;
    }
};