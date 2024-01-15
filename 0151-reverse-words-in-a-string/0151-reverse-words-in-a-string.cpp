class Solution {
public:
string solve(string &s){
    int n = s.size();
    string str = "";
    int i=n-1;
    string ss = "";
    while(i>=0){
        if(s[i] == ' '){
          if(ss.size() > 0){
            reverse(ss.begin(),ss.end());
            str += ss + " ";
          }
          ss = "";
        }
        else{
            ss+=s[i];
        }
        i--;
    }
    reverse(ss.begin(),ss.end());
      if(ss.size() > 0){
            str += ss;
          }
      else{
        str.pop_back();
      }
    return str;
}

    string reverseWords(string s) {
        return solve(s);
    }
};