class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
       Set<Integer> set = new HashSet<>();
        Set<Integer> result = new HashSet<>();
        
        // Add all elements from nums1 into the set
        for (int num : nums1) {
            set.add(num);
        }
        
        // Check for intersection with nums2 and add to result set
        for (int num : nums2) {
            if (set.contains(num)) {
                result.add(num);
            }
        }
        
        // Convert the result set to an array
        int[] intersection = new int[result.size()];
        int index = 0;
        for (int num : result) {
            intersection[index++] = num;
        }
        
        return intersection;
    }
}