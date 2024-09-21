class Solution {
public:
    bool isPalindrome(long x) {
        long temp = x;
        long ans = 0;
        
        while(x>0){
            int dig = x%10;
            ans = ans*10 + dig;
            x = x/10;
        }
        
        if(temp==ans){
            return true;
        }
        else{
            return false;
        }
    }
};