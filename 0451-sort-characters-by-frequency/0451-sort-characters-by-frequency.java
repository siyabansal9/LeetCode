class Solution {
    public String frequencySort(String s) {
        Map<Character,Integer> mp = new HashMap<>();
        
       for (int i = 0; i < s.length(); i++) {
           char ch = s.charAt(i);
           if(mp.containsKey(ch)){
                 mp.put(ch,mp.get(ch)+1);
           }
           else{
               mp.put(ch,1);
           }
       }
        
        int size = mp.size();
        StringBuilder sbd = new StringBuilder();
        while(size-->0){
            int max = 0;
            char c= 'a';
            for (Map.Entry<Character, Integer> entry : mp.entrySet()){
                int value = entry.getValue();
                if(value>max){
                    max = value;
                    c = entry.getKey();
                }
            }
            mp.remove(c);
            for(int i=1;i<=max;i++){
                sbd.append(c);
            }
        }
        return sbd.toString();
        
    }
}