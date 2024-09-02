class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(m+n);
        int j = 0;
        
        for(int i =0;i<m;i++){
            nums3[j] = nums1[i];
            j++;
        }
        
        for(int i=0;i<n;i++){
            nums3[j] = nums2[i];
            j++;
        }
        
        sort(nums3.begin(),nums3.end());
        
        for(int i=0;i<nums3.size();i++){
            nums1[i]=nums3[i];
        }
    }
};