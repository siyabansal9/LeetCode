class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n,true);
        int count = 0 ;
        
        for(int i=2;i<n;i++){
            if(prime[i]){
                int j = 2;
                while(i*j<n){
                    prime[i*j] = false;
                    j++;
                }
            }
        }
        
        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;
            }
        }
        
        return count;
    }
};