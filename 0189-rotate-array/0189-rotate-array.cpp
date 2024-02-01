class Solution {
public:
    
    void reverse(vector<int>&arr,int start,int end){
        
        while(start<end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& arr, int d) {
        int n=arr.size();
        d=d%n;
        
        reverse(arr,n-d,n-1);
        reverse(arr,0,n-d-1);
        reverse(arr,0,n-1);
        
    }
};