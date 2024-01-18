class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach=0;
        
        for(int i=0;i<nums.size();i++){
            if(reach<i){
                return 0;
            }
            reach=max(reach,i+nums[i]);
        }
        return 1;
    }
};