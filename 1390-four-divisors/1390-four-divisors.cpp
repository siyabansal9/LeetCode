class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        
        int N = 100001;
        
        vector<int> countDivisor(N,0);
        vector<int> sumDivisor(N,0);
        
        for(int i=1;i<N;i++){
            for(int j=i;j<N;j+=i){
                countDivisor[j]++;
                sumDivisor[j] += i ;
            }
        }
        
        int answer =0;
        
        for(int i=0;i<nums.size();i++){
            if(countDivisor[nums[i]]==4){
                answer += sumDivisor[nums[i]];
            }
        }
        
        return answer;
    }
};