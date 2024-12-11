class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> set = new HashSet<>();
        Set<Integer> result = new HashSet<>();
        
        // Add all elements from nums1 into the set
        for (int i = 0; i < nums1.length; i++) {
            set.add(nums1[i]);
        }
        
        // Check for intersection with nums2 and add to result set
        for (int j = 0; j < nums2.length; j++) {
            if (set.contains(nums2[j])) {
                result.add(nums2[j]);
            }
        }
        
        // Convert the result set to an array using a basic indexed for loop
        int[] intersection = new int[result.size()];
        int index = 0;
        for (Integer num : result) {
            intersection[index] = num;
            index++;
        }
        
        return intersection;
    }
}
