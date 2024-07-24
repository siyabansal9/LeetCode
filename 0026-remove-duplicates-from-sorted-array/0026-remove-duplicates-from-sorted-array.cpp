class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>uset;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            uset.insert(nums[i]);
        }
        
        int i = 0;
        
        for(auto x : uset){
            nums[i] = x;
            i++;
        }
        return i;
    }
};