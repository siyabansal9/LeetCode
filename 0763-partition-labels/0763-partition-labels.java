class Solution {
    public List<Integer> partitionLabels(String s) {
        int[] freq = new int[26];
        
        for(int i=0;i<s.length();i++){
            freq[s.charAt(i)-'a'] = i;
        }
        
        int start = 0;
        int end = 0;
        List<Integer> result = new ArrayList<>();
        
        for(int i=0;i<s.length();i++){
            end = Math.max(end,freq[s.charAt(i)-'a']);
            if(i == end){
                result.add(end-start+1);
                start = i+1;
            }
        }
        return result;
    }
}


