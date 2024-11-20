class Solution {
public:
    static bool customCompare(const string &a, const string &b) {
        return a + b > b + a;
    }
    
    string largestNumber(vector<int>& nums) {
        vector<string> strNums;
        for (int num : nums) {
            strNums.push_back(to_string(num));
        }
        
        // Sort using the custom comparator
        sort(strNums.begin(), strNums.end(), customCompare);
        
        // If the largest number is "0", return "0" (handles cases like [0, 0])
        if (strNums[0] == "0") {
            return "0";
        }
        
        // Concatenate all numbers to form the result
        string result;
        for (const string &num : strNums) {
            result += num;
        }
        
        return result;
    }
};
