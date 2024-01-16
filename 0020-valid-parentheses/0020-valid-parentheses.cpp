class Solution {
public:
    bool isValid(string x) {
        bool ans=true;
        stack<char>st;
        for(int i=0;i<x.length();i++){
            if(x[i]=='(' || x[i]=='{' || x[i]=='['){
                st.push(x[i]);
            }
            else if(x[i]==')'){
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }
                else{
                    ans=false;
                    break;
                }
            }
            else if(x[i]=='}'){
                if(!st.empty() && st.top()=='{'){
                    st.pop();
                }
                else{
                    ans=false;
                    break;
                }
            }
            else if(x[i]==']'){
                if(!st.empty() && st.top()=='['){
                    st.pop();
                }
                else{
                    ans=false;
                    break;
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return ans;
    }
};