class Solution {
public:
    
    vector<vector<int>> subsetHelper(vector<int>& nums, int i) {
        if(i==nums.size()) return {{}};
        
        vector<vector<int>> partial_ans = subsetHelper(nums,i+1);
        vector<vector<int>> dup = partial_ans;
        
        for(auto &v : dup){
            v.push_back(nums[i]);
        }
        
        vector<vector<int>> ans;
        for(auto a : partial_ans) ans.push_back(a);
        for(auto b : dup) ans.push_back(b);
        
        return ans;
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans = subsetHelper(nums,0);
        
        return ans;
    }
};