class Solution {
public:
    
//     void reverse(vector<int>&arr,int start,int end){
        
//         while(start<end){
//             int temp=arr[start];
//             arr[start]=arr[end];
//             arr[end]=temp;
//             start++;
//             end--;
//         }
//     }
    void rotate(vector<int>& arr, int d) {
        
//         d=d%n;
        
//         reverse(arr,n-d,n-1);
//         reverse(arr,0,n-d-1);
//         reverse(arr,0,n-1);
        
        int n = arr.size();
        
        vector<int> temp(arr.size());
        
        for(int i = 0 ; i < n ; i++){
            temp[(i+d)%n] = arr[i];
        }
        
        arr = temp;
        
    }
};