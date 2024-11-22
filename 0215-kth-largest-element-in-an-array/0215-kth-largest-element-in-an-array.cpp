class Solution {
public:
    
    int partition(vector<int>& nums, int s, int e){
        int pivot = nums[e];
        int i = s;
        
        for(int j=s;j<e;j++){
            if(nums[j] < pivot){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        
        swap(nums[i],nums[e]);
        
        return i; //correct index of pivot element.
    }
    
    
    int quickSelect(vector<int>& nums, int s, int e, int k){
        if(s==e){
            return nums[s];
        }
        
        int idx = partition(nums,s,e);
        
        if(idx==k){
            return nums[idx];
        }
        else if(idx<k){
            //RIGHT SIDE
            return quickSelect(nums, idx+1, e, k);
        }
        else{
            //LEFT SIDE
            return quickSelect(nums, s, idx-1, k);
        }
    }
    
    
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        
        return quickSelect(nums,0,n-1,n-k);
    }
};