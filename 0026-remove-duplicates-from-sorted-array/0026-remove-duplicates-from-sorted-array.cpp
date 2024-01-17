class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int rd=0;
        for(int i=1;i<nums.size();i++){
            if(nums[rd]!=nums[i]){
                rd++;
                nums[rd]=nums[i];
            }
        }
        return rd+1;
    }
};