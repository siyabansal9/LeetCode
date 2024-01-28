class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream iss(s);
    string word;
    while (iss >> word) {
        // Read each word in the string
    }

    // Check if there are any words in the string
    if (word.empty()) {
        return 0;
    }

    // Return the length of the last word
    return word.length();
    }
};