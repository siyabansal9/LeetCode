class Solution {
    public int leastBricks(List<List<Integer>> wall) {
        int l = 0;
        for(Integer i : wall.get(0)){
            l+=i;
        }
        int h = wall.size();
        
        Map<Integer,Integer> mp = new HashMap<>();
        
        for(List<Integer> ls: wall){
            int prefix = 0;
            for(int i=0;i<ls.size()-1;i++){
                prefix += ls.get(i);
                if(mp.containsKey(prefix)){
                    int freq = mp.get(prefix);
                    mp.put(prefix,freq+1);
                }
                else{
                    mp.put(prefix,1);
                }
            }
        }
        int max = 0;
        
        for(Map.Entry<Integer,Integer> hmp: mp.entrySet()){
            max = Math.max(max,hmp.getValue());
        }
            
        return h-max;
    }
}