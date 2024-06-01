class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
        int n=chars.size();
        int i=0;
        
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            
            //yaha kab aaoge
            //ya to vector pura traverse krlia
            //ya mew character encounter kia h
            
            //old character store krlo
            chars[index++]=chars[i];
            
            int count=j-i;
            
            if(count>1){
                //converting counting into single digit and saving in answer
                string cnt=to_string(count);
                
                for(char ch: cnt){
                    chars[index++]=ch;
                }
            }
            i=j;
        }
        return index;
    }
};