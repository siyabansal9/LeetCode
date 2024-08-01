class Solution {
    public int[] intersection(int[] arr1, int[] arr2) {
        int n1 = arr1.length; 
        int n2 = arr2.length;

        HashSet<Integer> hp1 = new HashSet<>();
        
        for(int i=0; i<n1; i++){
            hp1.add(arr1[i]);
        }

        HashSet<Integer> hp2 = new HashSet<>();

        for(int i=0; i<n2; i++){
            if(hp1.contains(arr2[i])){
                hp2.add(arr2[i]);
            } 
        }

        int ans[] = new int[hp2.size()];
        int idx = 0;

        for(var a : hp2){
            ans[idx] = a;
            idx++;
        }
        return ans;
    }
}