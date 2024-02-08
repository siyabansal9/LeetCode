class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int l=0;
        int h=nums.size()-1;
        int m;

        while(l<=h){
            m=l+(h-l)/2;
            if(nums[m]==t){
                return m;
            }
            else if(nums[m]<t){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return l;
                 
    }
};