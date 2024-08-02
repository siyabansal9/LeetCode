class Solution {
    public int[] topKFrequent(int[] arr, int k) {
        int n = arr.length;
        Map<Integer, Integer> mp = new TreeMap<>();
        
        for (int i = 0; i < arr.length; i++) {
            if (mp.containsKey(arr[i])) {
                mp.put(arr[i], mp.get(arr[i]) + 1);
            } else {
                mp.put(arr[i], 1);
            }
        }
        
        int[] res = new int[k];
        int i = 0;
        
        while(k>0){
            int ele = 0;
            int max = 0;
            
            for(Map.Entry<Integer,Integer> entry : mp.entrySet()){
                int key = entry.getKey();
                int val = entry.getValue();
                
                if(max<val){
                    max = val;
                    ele = key;
                }
            }
            res[i++] = ele;
            mp.remove(ele);
            k--;
        }
        
        
        return res;
    }
}