class Solution {
public:
    vector<vector<int>> result;
    
    void twoSum(vector<int>& nums, int t, int s, int e){
        while(s<e){
            if(nums[s] + nums[e] > t){
                e--;
            }
            else if(nums[s] + nums[e] < t){
                s++;
            }
            else{
                while(s<e && nums[s] == nums[s+1]){
                    s++;
                }
                
                while(s<e && nums[e] == nums[e-1]){
                    e--;
                }
                
                result.push_back({-t,nums[s],nums[e]});
                
                s++;
                e--;
            }
                    
                   
        }
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        
        if(n<3){
            return {};
        }
        
        result.clear();
        
        sort(nums.begin(),nums.end());
        
        //fixing one element : n1
        for(int i=0;i<n;i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            
            int n1 = nums[i];
            int target = -n1;
            
            twoSum(nums,target,i+1,n-1);  //it will find n2 and n3
        } 
        
        return result;
    }
    
};