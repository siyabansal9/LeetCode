class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int s=0;
        int e=n-1;

        while(s<=e){
            int mid=s+(e-s)/2;

            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }
};